#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EUseRestriction.h"
#include "EOutline.h"
#include "EGrabbedStateCameraMode.h"
#include "GrabberComponent.generated.h"

class USkeletalMeshComponent;
class AActor;
class ADeepPathfinderCharacter;
class USoundCue;
class UPrimitiveComponent;
class UDialogDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabberComponentOnReleasedActor, AActor*, aGrabbedActor);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabberComponentOnGrabbedActor, AActor*, aGrabbedActor);

UCLASS(BlueprintType)
class UGrabberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGrabberComponentOnGrabbedActor OnGrabbedActor;
    
    UPROPERTY(BlueprintAssignable)
    FGrabberComponentOnReleasedActor OnReleasedActor;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagFilter;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> GrabbedActor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADeepPathfinderCharacter> PathfinderOwner;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> OwnerMesh;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> TargetClippingWith;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* BeginGrabedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* GrabedLoopSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* EndGrabedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* BeginGrabbedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EndGrabbedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* AttentionGrabbedShout;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentlyGrabbed)
    AActor* CurrentlyGrabbed;
    
    UPROPERTY(EditAnywhere)
    EUseRestriction UseRestriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GrabAttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarryCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOutline PlayerOutlineOnGrab;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGrabbedStateCameraMode CameraMode;
    
    UPROPERTY(EditAnywhere)
    bool TrackPlayerCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ManualGrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanPlayerShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NeedsPathToTarget;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerReleased();
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerGrabbed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentlyGrabbed();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnParentDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbedTargetValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrabbed() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrabTarget(AActor* aGrabTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGrabTarget(AActor* aTarget) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGrabberComponent();
};

