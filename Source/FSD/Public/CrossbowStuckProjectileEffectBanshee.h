#pragma once
#include "CoreMinimal.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectBanshee.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectBanshee : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SearchSphereSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SearchTime;
    
public:
    UCrossbowStuckProjectileEffectBanshee();
};

