#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SimpleMovingEnemyAnimInstance.generated.h"

UCLASS(NonTransient)
class USimpleMovingEnemyAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float WalkCyclePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float MeshScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMoving;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMeshScale(float newScale);
    
    USimpleMovingEnemyAnimInstance();
};

