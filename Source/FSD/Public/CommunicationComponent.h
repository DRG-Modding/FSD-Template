#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ActiveOutline.h"
#include "EAsyncLoadPriority.h"
#include "EShoutType.h"
#include "MissionShoutDelegateDelegate.h"
#include "MissionShoutEndDelegateDelegate.h"
#include "MissionShoutQueueItem.h"
#include "Templates/SubclassOf.h"
#include "CommunicationComponent.generated.h"

class APlayerCharacter;
class UAudioComponent;
class UCharacterShoutsData;
class UDialogDataAsset;
class UObject;
class UShoutWidget;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FShoutDelegate, APlayerCharacter*, InSender, FText, InText, float, InDuration);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutDelegate OnSubtitleShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutDelegate OnPlayerShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutDelegate OnMissionShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionShoutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionControlFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> DelayedShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KillShoutAllowedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionControlPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MissionControlAudioComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UShoutWidget*> ActiveShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveOutline> ActiveOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LastShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> ShoutAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> ShoutHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMissionShoutQueueItem> MissionShoutQueue;
    
public:
    UCommunicationComponent();
    UFUNCTION(BlueprintCallable)
    void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustomLocalOnly(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustom(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    void Shout(EShoutType NewShout);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionControlPaused(bool IsPaused);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerShout(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionControlSpeaking() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientShout(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
};

