#pragma once
#include "CoreMinimal.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "FSDPawn.h"
#include "TriggerAI.h"
#include "DeepPathfinderCharacter.generated.h"

class UDeepPatherFinderCharacterAfflictionComponent;
class USkeletalMeshComponent;
class UDeepPathfinderMovement;
class UMaterialInterface;

UCLASS(Blueprintable)
class ADeepPathfinderCharacter : public AFSDPawn, public ITriggerAI, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayerStandOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(EditAnywhere)
    float StaggerDurationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StaggerImunityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StaggerPauseLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrozenPauseLogic;
    
    UPROPERTY(EditAnywhere)
    float AttackerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(EditAnywhere)
    float AllowedInFormationChance;
    
public:
    ADeepPathfinderCharacter();
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
    
    
    // Fix for true pure virtual functions not being implemented
};

