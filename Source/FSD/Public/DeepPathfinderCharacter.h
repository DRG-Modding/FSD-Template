#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "TriggerAI.h"
#include "DeepPathfinderCharacter.generated.h"

class UDeepPatherFinderCharacterAfflictionComponent;
class UDeepPathfinderMovement;
class USkeletalMeshComponent;
class UMaterialInterface;

UCLASS()
class ADeepPathfinderCharacter : public AFSDPawn, public ITriggerAI, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CenterMassSocketName;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AnimationOffset;
    
    UPROPERTY(EditAnywhere)
    bool CanPlayerStandOn;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
    UPROPERTY(EditAnywhere)
    float StaggerDurationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StaggerImunityWindow;
    
    UPROPERTY(EditAnywhere)
    bool StaggerPauseLogic;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHidden;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsStaggered;
    
    UPROPERTY(EditAnywhere)
    bool FrozenPauseLogic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackerRadius;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(EditAnywhere)
    float AllowedInFormationChance;
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryJoinFormation();
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool shouldHide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPausedMovementElapsed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void LeaveFormation();
    
    ADeepPathfinderCharacter();
    
    // Fix for true pure virtual functions not being implemented
};

