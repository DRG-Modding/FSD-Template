#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpactedSignatureDelegate.h"
#include "HightAccelerationSignatureDelegate.h"
#include "ImpactComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactedSignature OnImpactedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHightAccelerationSignature OnHighAcceleration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrackAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrackVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerHighAccelAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

