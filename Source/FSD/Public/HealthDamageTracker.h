#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageSigDelegate.h"
#include "HealthDamageTracker.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthDamageTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnTrackedPercentageReachedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float TiggerOnPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
public:
    UHealthDamageTracker();
    UFUNCTION(BlueprintCallable)
    void ResetTrackedDamage();
    
protected:
    UFUNCTION()
    void OnDamageTaken(float Amount);
    
};

