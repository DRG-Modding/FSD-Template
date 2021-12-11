#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "GliderAnimSync.h"
#include "GliderBeastAnimInstance.generated.h"

UCLASS(NonTransient)
class UGliderBeastAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float SyncAnimLength;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGliderAnimSync AnimSync;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsFrozen;
    
public:
    UGliderBeastAnimInstance();
};

