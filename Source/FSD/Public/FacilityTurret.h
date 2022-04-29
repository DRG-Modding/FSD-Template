#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "FacilityTurret.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class USoundCue;
class AActor;

UCLASS(Blueprintable)
class FSD_API AFacilityTurret : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(EditAnywhere)
    float IndicatorActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishAttackIgnoreLoS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableOnInactive;
    
    UPROPERTY(EditAnywhere)
    float FoldOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EngagedAudio;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float AimAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AimSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TurretEngaged, meta=(AllowPrivateAccess=true))
    bool TurretEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysActive;
    
public:
    AFacilityTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

