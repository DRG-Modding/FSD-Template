#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageSigDelegate.h"
#include "HealthDamageTracker.generated.h"

class UHealthComponentBase;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHealthDamageTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDamageSig OnTrackedPercentageReachedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiggerOnPercentage;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
public:
    UHealthDamageTracker();
    UFUNCTION(BlueprintCallable)
    void ResetTrackedDamage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(float Amount);
    
};

