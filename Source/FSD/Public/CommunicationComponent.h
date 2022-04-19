#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "ActiveOutline.h"
#include "MissionShoutDelegateDelegate.h"
#include "MissionShoutEndDelegateDelegate.h"
#include "MixerAnnouncementDelegateDelegate.h"
#include "MixerAnnouncement.h"
#include "MissionShoutQueueItem.h"
#include "EShoutType.h"
#include "CommunicationComponent.generated.h"

class UShoutWidget;
class UDialogDataAsset;
class UCharacterShoutsData;
class UAudioComponent;
class APlayerCharacter;
class UObject;
class USoundBase;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMissionShoutDelegate OnMissionShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionShoutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMixerAnnouncementDelegate OnMixerAnnouncement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionControlFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ShoutingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShoutWidget> ShoutWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterShoutsData* CharacterShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseRangeShoutDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> DelayedShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KillShoutAllowedTags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bMissionControlPaused;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* MissionControlAudioComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerCharacter*, UShoutWidget*> ActiveShouts;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveOutline> ActiveOutlines;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LastShout;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShoutAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> ShoutHistory;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMissionShoutQueueItem> MissionShoutQueue;
    
public:
    UCommunicationComponent();
    UFUNCTION(BlueprintCallable)
    void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustomLocalOnly(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    static void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustom(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    void Shout(EShoutType NewShout);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionControlPaused(bool IsPaused);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerShout(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMixerAnnouncement(const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MixerAnnouncementLocalOnly(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable)
    static void MixerAnnouncement(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable)
    static int32 MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    static void MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionControlSpeaking() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void ClientShout(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientMixerAnnouncement(const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
};

