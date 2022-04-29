#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "ShredderAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UShredderAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InFoldoutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InSpinRange;
    
    UShredderAnimInstance();
};

