#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "ESchematicType.h"
#include "SchematicReward.generated.h"

class USchematic;

UCLASS(Blueprintable, EditInlineNew)
class USchematicReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESchematicType SchematicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USchematic* RewardedSchematic;
    
public:
    USchematicReward();
};

