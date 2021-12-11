#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "CaretagerBodyAnimInstance.generated.h"

UCLASS(NonTransient)
class UCaretagerBodyAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool CoolingOff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWeakpointAVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWeakpointBVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWeakpointCVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWeakpointDVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float RotationAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    int32 AoEStage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSpawningDrones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSpawningBombs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSpawningShredders;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSpawningTurrets;
    
public:
    UCaretagerBodyAnimInstance();
};

