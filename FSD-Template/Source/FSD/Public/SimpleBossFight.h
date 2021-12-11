#pragma once
#include "CoreMinimal.h"
#include "BossFightInterface.h"
#include "UObject/Object.h"
#include "BossFight.h"
#include "SimpleBossFight.generated.h"

UCLASS(BlueprintType)
class USimpleBossFight : public UObject, public IBossFightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FBossFight BossFight;
    
    USimpleBossFight();
    
    // Fix for true pure virtual functions not being implemented
};

