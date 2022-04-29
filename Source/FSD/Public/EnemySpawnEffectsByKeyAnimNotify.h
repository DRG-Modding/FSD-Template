#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemySpawnEffectsByKeyAnimNotify.generated.h"

class UEnemySpawnEffectsKey;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UEnemySpawnEffectsByKeyAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemySpawnEffectsKey* EffectKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Attached: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
public:
    UEnemySpawnEffectsByKeyAnimNotify();
};

