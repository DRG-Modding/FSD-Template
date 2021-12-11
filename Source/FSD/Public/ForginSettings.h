#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.h"
#include "Engine/DataAsset.h"
#include "ForginSettings.generated.h"

UCLASS()
class UForginSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 XPRequiredPerLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<ESchematicType> MasteryRewardCycle;
    
    UForginSettings();
};

