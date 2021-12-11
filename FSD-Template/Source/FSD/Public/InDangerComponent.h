#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InDangerComponent.generated.h"

class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInDangerComponentOnInDanger);

UCLASS(BlueprintType)
class UInDangerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInDangerComponentOnInDanger OnInDanger;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UHealthComponentBase> ParentHealthComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageThreshold;
    
    UPROPERTY(EditAnywhere)
    bool RunsOnClients;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool aFlag);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive() const;
    
    UInDangerComponent();
};

