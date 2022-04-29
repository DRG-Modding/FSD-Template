#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "PickaxePartRewarder.generated.h"

class UPickaxePart;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPickaxePartRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPickaxePart* PickaxePart;
    
    UPickaxePartRewarder();
};

