#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpactComponent.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FImpactComponentOnImpactedEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FImpactComponentOnHighAcceleration);

UCLASS(BlueprintType)
class UImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FImpactComponentOnImpactedEvent OnImpactedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FImpactComponentOnHighAcceleration OnHighAcceleration;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool DebugText;
    
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
    void SetCheckVelocity(bool aCheckVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckAcceleration(bool aCheckAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void EnableImpactCheckhing(USceneComponent* cmp);
    
    UFUNCTION(BlueprintCallable)
    void DisableImpactChecking();
    
    UImpactComponent();
};

