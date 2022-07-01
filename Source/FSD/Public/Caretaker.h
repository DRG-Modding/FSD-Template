#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "ECaretakerSpawnType.h"
#include "Caretaker.generated.h"

class USceneComponent;
class UEnemyHealthComponent;
class USkeletalMeshComponent;
class UCaretakerActionComponent;
class UPassthroughSubHealthComponent;
class UHealthDamageTracker;
class UPawnStatsComponent;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class FSD_API ACaretaker : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> Eyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPassthroughSubHealthComponent*> subHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthDamageTracker* DamageTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCaretakerActionComponent*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCaretakerActionComponent* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentStage, meta=(AllowPrivateAccess=true))
    int32 CurrentStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TargetRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RotationRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Server_Rotation, meta=(AllowPrivateAccess=true))
    float Server_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInStageCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWeakpointAVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWeakpointBVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWeakpointCVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWeakpointDVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECaretakerSpawnType ActiveSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AoEStage;
    
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_OpenEye)
    int8 OpenEye;
    
public:
    ACaretaker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void WakeUp();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetRotationRate(int32 rateIndex);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OpenRandomEye(bool forbidLastEye);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartHideFromDamage();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Server_Rotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OpenEye();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewStage(int32 stageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEyeOpened(USkeletalMeshComponent* eye);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEyeClosed(USkeletalMeshComponent* eye);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(float Amount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyEyeOpen() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitiateNextStage();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CloseAllEyes();
    
};

