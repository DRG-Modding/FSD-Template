#pragma once
#include "CoreMinimal.h"
#include "TriggerAI.h"
#include "FSDPawn.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "DeepPathfinderCharacter.generated.h"

class UDeepPathfinderMovement;
class UMaterialInterface;
class UDeepPatherFinderCharacterAfflictionComponent;
class USkeletalMeshComponent;

UCLASS()
class ADeepPathfinderCharacter : public AFSDPawn, public ITriggerAI, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float AnimationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayerStandOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerImunityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StaggerPauseLogic;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrozenPauseLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackerRadius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

