#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptor.h"
#include "AmberEventEnemyPool.generated.h"

UCLASS()
class UAmberEventEnemyPool : public UEnemyGroupDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxTimeBetweenSpawn;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenSpawn;
    
    UPROPERTY(EditAnywhere)
    int32 MaxEnemyCap;
    
    UPROPERTY(EditAnywhere)
    int32 AmbersNeededdToComplete;
    
    UPROPERTY(EditAnywhere)
    int32 AmbersNeededOnePlayer;
    
    UAmberEventEnemyPool();
};

