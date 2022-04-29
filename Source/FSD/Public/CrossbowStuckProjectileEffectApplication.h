#pragma once
#include "CoreMinimal.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectApplication.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectApplication : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SearchSphereSize;
    
    UPROPERTY(EditAnywhere)
    float SearchTime;
    
public:
    UCrossbowStuckProjectileEffectApplication();
};

