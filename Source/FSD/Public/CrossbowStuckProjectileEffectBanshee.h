#pragma once
#include "CoreMinimal.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectBanshee.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectBanshee : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SearchSphereSize;
    
    UPROPERTY(EditAnywhere)
    float SearchTime;
    
public:
    UCrossbowStuckProjectileEffectBanshee();
};

