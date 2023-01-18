#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "SpecialEventSettings.generated.h"

class AEventRewardFrame;
class UDebrisPositioning;
class USpecialEvent;

UCLASS(Blueprintable)
class USpecialEventSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecialEvent*> MachineEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ME_SpawnChanceMissionLengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecialEvent*> OtherSpecialEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Other_SpawnChanceMissionLengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventRewardFrame> EventRewardFrameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* EventRewardFramePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventRewardRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreditsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XPReward;
    
public:
    USpecialEventSettings();
};

