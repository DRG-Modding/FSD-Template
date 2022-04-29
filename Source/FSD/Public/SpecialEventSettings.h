#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "SpecialEventSettings.generated.h"

class UDebrisPositioning;
class USpecialEvent;
class AEventRewardFrame;

UCLASS(Blueprintable)
class USpecialEventSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecialEvent*> SpecialEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventRewardFrame> EventRewardFrameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* EventRewardFramePositioning;
    
    UPROPERTY(EditAnywhere)
    float EventRewardRadius;
    
    UPROPERTY(EditAnywhere)
    float CreditsReward;
    
    UPROPERTY(EditAnywhere)
    float XPReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpawnChanceMissionLengthCurve;
    
public:
    USpecialEventSettings();
};

