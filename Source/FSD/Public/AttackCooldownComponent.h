#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackCooldown.h"
#include "AttackCooldownComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UAttackCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackCooldown> AttackCooldowns;
    
public:
    UAttackCooldownComponent();
    UFUNCTION(BlueprintCallable)
    void SetCooldown(const FName& AttackName, float cooldownSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackOffCooldown(const FName& AttackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAttackOffCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    void AttackUsed(const FName& Name);
    
};

