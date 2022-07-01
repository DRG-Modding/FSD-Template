#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BossFightInterface.h"
#include "BossFight.h"
#include "SimpleBossFight.generated.h"

UCLASS(Blueprintable)
class USimpleBossFight : public UObject, public IBossFightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFight BossFight;
    
    USimpleBossFight();
    
    // Fix for true pure virtual functions not being implemented
};

