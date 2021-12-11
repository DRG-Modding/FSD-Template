#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EnemyPawn.h"
#include "UObject/NoExportTypes.h"
#include "FacilityTurret.generated.h"

class USkeletalMeshComponent;
class AActor;
class USceneComponent;
class USoundCue;

UCLASS()
class FSD_API AFacilityTurret : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(EditAnywhere)
    float IndicatorActivationDelay;
    
    UPROPERTY(EditAnywhere)
    bool FinishAttackIgnoreLoS;
    
    UPROPERTY(EditAnywhere)
    bool InvulnerableOnInactive;
    
    UPROPERTY(EditAnywhere)
    float FoldOutTime;
    
    UPROPERTY(EditAnywhere)
    USoundCue* EngagedAudio;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float AimAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve AimSpeedCurve;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_TurretEngaged)
    bool TurretEngaged;
    
    UPROPERTY(EditAnywhere)
    bool AlwaysActive;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAttacking(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TurretEngaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngagedChanged(bool engaged);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookingDirection() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityTurret();
};

