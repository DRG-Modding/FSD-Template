#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "PickaxePartRewarder.generated.h"

class UPickaxePart;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPickaxePartRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPickaxePart* PickaxePart;
    
    UPickaxePartRewarder();
};

