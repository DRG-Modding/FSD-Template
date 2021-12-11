#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "ESchematicType.h"
#include "SchematicReward.generated.h"

class USchematic;

UCLASS(BlueprintType, EditInlineNew)
class USchematicReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESchematicType SchematicType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USchematic* RewardedSchematic;
    
public:
    USchematicReward();
};

