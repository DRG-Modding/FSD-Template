#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptor.h"
#include "AmberEventEnemyPool.generated.h"

UCLASS(Blueprintable)
class UAmberEventEnemyPool : public UEnemyGroupDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxTimeBetweenSpawn;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnemyCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbersNeededdToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbersNeededOnePlayer;
    
    UAmberEventEnemyPool();
};

