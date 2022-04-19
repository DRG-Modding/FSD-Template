#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "ClaimableRewardView.generated.h"

class UDialogDataAsset;
class UUserWidget;
class USoundCue;

USTRUCT(BlueprintType)
struct FClaimableRewardView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionControlSpeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> BackgroundWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> FanfareAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInRewardsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> RewardDisplays;
    
    FSD_API FClaimableRewardView();
};

