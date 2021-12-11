#pragma once
#include "CoreMinimal.h"
#include "TentacleBase.h"
#include "TriggerAI.h"
#include "EFacilityTentacleState.h"
#include "UObject/NoExportTypes.h"
#include "FacilityTentacle.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;
class UDebrisPositioning;

UCLASS()
class FSD_API AFacilityTentacle : public ATentacleBase, public ITriggerAI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SwaySpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool Extended;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TentacleState)
    EFacilityTentacleState TentacleState;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* HeadMesh;
    
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EFacilityTentacleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TentacleState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityTentacle();
    
    // Fix for true pure virtual functions not being implemented
};

