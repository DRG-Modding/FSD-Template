#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TentacleBase.h"
#include "TriggerAI.h"
#include "EFacilityTentacleState.h"
#include "TentacleTarget.h"
#include "FacilityTentacle.generated.h"

class UDebrisPositioning;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS()
class FSD_API AFacilityTentacle : public ATentacleBase, public ITriggerAI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwaySpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool Extended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TentacleState, meta=(AllowPrivateAccess=true))
    EFacilityTentacleState TentacleState;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_DesiredTarget, meta=(AllowPrivateAccess=true))
    FTentacleTarget DesiredTarget;
    
public:
    AFacilityTentacle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EFacilityTentacleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TentacleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredTarget();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation);
    
    
    // Fix for true pure virtual functions not being implemented
};

