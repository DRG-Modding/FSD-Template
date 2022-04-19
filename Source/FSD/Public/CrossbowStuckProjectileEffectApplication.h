#pragma once
#include "CoreMinimal.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectApplication.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectApplication : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SearchSphereSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SearchTime;
    
public:
    UCrossbowStuckProjectileEffectApplication();
};

