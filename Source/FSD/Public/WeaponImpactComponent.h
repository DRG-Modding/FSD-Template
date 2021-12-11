#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponImpactComponent.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeaponImpactComponentOnImpactedEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeaponImpactComponentOnHighAcceleration);

UCLASS(BlueprintType)
class UWeaponImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWeaponImpactComponentOnImpactedEvent OnImpactedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponImpactComponentOnHighAcceleration OnHighAcceleration;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool DebugText;
    
    UPROPERTY(EditAnywhere)
    FName ImpactSocketName;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* ActiveMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TrackAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool TrackVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float TriggerHighAccelAt;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TriggerAtVelocityDifference;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableImpactCheckhing(USkeletalMeshComponent* cmp);
    
    UFUNCTION(BlueprintCallable)
    void DisableImpactChecking();
    
    UWeaponImpactComponent();
};

