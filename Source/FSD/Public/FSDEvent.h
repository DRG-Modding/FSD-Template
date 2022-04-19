#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "FSDEventActivateChangedDelegate.h"
#include "ClaimableRewardView.h"
#include "FSDEvent.generated.h"

class UFSDEvent;
class UObject;
class UTexture2D;
class ADebrisDataActor;
class UWorld;
class UCampaign;
class APlayerController;

UCLASS(BlueprintType)
class FSD_API UFSDEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeBeerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardView ClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleScreenOverride;
    
public:
    UFSDEvent();
    UFUNCTION(BlueprintCallable)
    void MarkClaimableRewardsSeen(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewards(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTitleScreenOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive(UObject* WorldContext) const;
    
};

