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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESchematicType SchematicType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USchematic* RewardedSchematic;
    
public:
    USchematicReward();
};

