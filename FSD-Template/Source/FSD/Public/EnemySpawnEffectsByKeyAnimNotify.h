#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemySpawnEffectsByKeyAnimNotify.generated.h"

class UEnemySpawnEffectsKey;

UCLASS(CollapseCategories, MinimalAPI)
class UEnemySpawnEffectsByKeyAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnemySpawnEffectsKey* EffectKey;
    
    UPROPERTY(EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
public:
    UEnemySpawnEffectsByKeyAnimNotify();
};

