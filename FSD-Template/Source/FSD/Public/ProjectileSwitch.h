#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EProjectileSwitchCriteria.h"
#include "ProjectileSwitch.generated.h"

class AProjectileBase;

USTRUCT(BlueprintType)
struct FProjectileSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectileBase> projectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EProjectileSwitchCriteria CriteriaType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CriteriaThreshhold;
    
    FSD_API FProjectileSwitch();
};

