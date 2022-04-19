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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileSwitchCriteria CriteriaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriteriaThreshhold;
    
    FSD_API FProjectileSwitch();
};

