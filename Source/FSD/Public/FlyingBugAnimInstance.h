#pragma once
#include "CoreMinimal.h"
#include "EFlyingBugDeathAnimationCategory.h"
#include "SimpleMovingEnemyAnimInstance.h"
#include "FlyingBugAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFlyingBugAnimInstance : public USimpleMovingEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInAttackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFlyingBugDeathAnimationCategory DeathAnimationCategory;
    
public:
    UFlyingBugAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetDeathAnimation(EFlyingBugDeathAnimationCategory deathAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotInAttackMode() const;
    
};

