#pragma once
#include "CoreMinimal.h"
#include "GliderAnimSync.h"
#include "EnemyAnimInstance.h"
#include "GliderBeastAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGliderBeastAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGliderAnimSync AnimSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFrozen;
    
public:
    UGliderBeastAnimInstance();
};

