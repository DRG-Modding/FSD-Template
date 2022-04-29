#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SimpleMovingEnemyAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USimpleMovingEnemyAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float WalkCyclePlayRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
public:
    USimpleMovingEnemyAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetMeshScale(float newScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotMoving() const;
    
};

