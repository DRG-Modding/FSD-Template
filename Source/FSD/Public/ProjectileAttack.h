#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ProjectileAttack.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class UProjectileAttack : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval Delay;
    
    UPROPERTY(EditAnywhere)
    bool TriggerOnEvent;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalAngleOffset;
    
    UPROPERTY(EditAnywhere)
    FName OverrideSocketName;
    
public:
    UProjectileAttack();
};

