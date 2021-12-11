#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackCooldown.h"
#include "AttackCooldownComponent.generated.h"

UCLASS(BlueprintType)
class FSD_API UAttackCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FAttackCooldown> AttackCooldowns;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCooldown(const FName& AttackName, float cooldownSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackOffCooldown(const FName& AttackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAttackOffCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    void AttackUsed(const FName& Name);
    
    UAttackCooldownComponent();
};

