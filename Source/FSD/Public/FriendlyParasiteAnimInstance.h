#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FriendlyParasiteAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFriendlyParasiteAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InFoldoutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InSpinRange;
    
    UFriendlyParasiteAnimInstance();
};

