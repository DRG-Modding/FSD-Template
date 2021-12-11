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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDialogDataAsset* MissionControlSpeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUserWidget> BackgroundWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USoundCue> FanfareAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveInRewardsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClaimableRewardEntry> RewardDisplays;
    
    FSD_API FClaimableRewardView();
};

