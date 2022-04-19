#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpactedSignatureDelegate.h"
#include "HightAccelerationSignatureDelegate.h"
#include "ImpactComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FImpactedSignature OnImpactedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHightAccelerationSignature OnHighAcceleration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool TrackAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool TrackVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TriggerHighAccelAt;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TriggerAtVelocityDifference;
    
public:
    UImpactComponent();
    UFUNCTION(BlueprintCallable)
    void SetCheckVelocity(bool aCheckVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckAcceleration(bool aCheckAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void EnableImpactCheckhing(USceneComponent* cmp);
    
    UFUNCTION(BlueprintCallable)
    void DisableImpactChecking();
    
};

