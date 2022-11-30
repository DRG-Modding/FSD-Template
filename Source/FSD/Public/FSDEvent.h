#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EncounterSpecialItem.h"
#include "FSDEventActivateChangedDelegate.h"
#include "EHolidayType.h"
#include "UObject/NoExportTypes.h"
#include "ClaimableRewardView.h"
#include "FSDEvent.generated.h"

class UDrinkableDataAsset;
class ADebrisDataActor;
class UCampaign;
class UWorld;
class UTexture2D;
class UObject;
class UFSDEvent;
class APlayerController;

UCLASS(Blueprintable)
class FSD_API UFSDEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHolidayType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeBeerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SpecialEventBeer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpecialItem> EventEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventDebrisInDeepDives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> UnloadSpacerigSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardView ClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleScreenOverride;
    
public:
    UFSDEvent();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void MarkClaimableRewardsSeen(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewards(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTitleScreenOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool GetIsActive(UObject* WorldContext) const;
    
};

