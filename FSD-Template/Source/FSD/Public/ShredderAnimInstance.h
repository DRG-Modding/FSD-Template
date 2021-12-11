#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "ShredderAnimInstance.generated.h"

UCLASS(NonTransient)
class UShredderAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InFoldoutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InSpinRange;
    
    UShredderAnimInstance();
};

