#pragma once
#include "CoreMinimal.h"
#include "BaseCritterDescriptor.h"
#include "RareCritterDescriptor.generated.h"

UCLASS()
class URareCritterDescriptor : public UBaseCritterDescriptor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Rarity;
    
public:
    URareCritterDescriptor();
};

