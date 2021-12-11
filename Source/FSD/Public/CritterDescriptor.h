#pragma once
#include "CoreMinimal.h"
#include "BaseCritterDescriptor.h"
#include "IRandRange.h"
#include "CritterDescriptor.generated.h"

UCLASS()
class UCritterDescriptor : public UBaseCritterDescriptor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FIRandRange SpawnAmountPerRoom;
    
    UPROPERTY(EditAnywhere)
    float SpawnChancePerRoom;
    
    UPROPERTY(EditAnywhere)
    FIRandRange SpawnAmountPerLevel;
    
public:
    UCritterDescriptor();
};

