#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpactedSignatureDelegate.h"
#include "HightAccelerationSignatureDelegate.h"
#include "WeaponImpactComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWeaponImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FImpactedSignature OnImpactedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHightAccelerationSignature OnHighAcceleration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImpactSocketName;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ActiveMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool TrackAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool TrackVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TriggerHighAccelAt;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TriggerAtVelocityDifference;
    
public:
    UWeaponImpactComponent();
    UFUNCTION(BlueprintCallable)
    void EnableImpactCheckhing(USkeletalMeshComponent* cmp);
    
    UFUNCTION(BlueprintCallable)
    void DisableImpactChecking();
    
};

