#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "MultiTargeter.h"
#include "TerminatorEnemy.generated.h"

class UAnimMontage;
class UHitReactionComponent;
class AActor;

UCLASS()
class ATerminatorEnemy : public AEnemyDeepPathfinderCharacter, public IMultiTargeter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlairAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFlairAnimCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlairAnimationCooldown;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> CurrentTargets;
    
public:
    ATerminatorEnemy();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayFlairAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

