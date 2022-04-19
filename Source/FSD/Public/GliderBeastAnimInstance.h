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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SyncAnimLength;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FGliderAnimSync AnimSync;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsFrozen;
    
public:
    UGliderBeastAnimInstance();
};

