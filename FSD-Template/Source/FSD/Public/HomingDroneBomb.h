#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "Projectile.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HomingDroneBomb.generated.h"

class UEnemyHealthComponent;
class USoundCue;

UCLASS()
class AHomingDroneBomb : public AProjectile, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ArmingSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HomingUpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetSearchInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HomingAccelerationMagnitude)
    float HomingAccelerationMagnitude;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateHomingSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SearchForTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingAccelerationMagnitude();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHomingDroneBomb();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

