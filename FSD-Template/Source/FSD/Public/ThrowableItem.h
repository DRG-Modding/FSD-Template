#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "UObject/NoExportTypes.h"
#include "ThrowableItem.generated.h"

class AActor;
class AThrowableActor;
class AItem;
class UAnimMontage;
class UItemUpgrade;

UCLASS()
class AThrowableItem : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AThrowableActor> ThrowableClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPThrowMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPThrowMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InheritOwnerVelocityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownAfterThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CooldownAfterDetonation;
    
    UPROPERTY(EditAnywhere)
    bool CanThrowBeforeEquipAnimFinish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowZOffset;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float CooldownLeft;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItem> LoadoutItem;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Simulate_Throw(TSubclassOf<AThrowableActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Throw(TSubclassOf<AThrowableActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemThrown(AThrowableActor* thrownActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSpawned(AThrowableActor* thrownActor);
    
    UFUNCTION(BlueprintCallable)
    void OnThrownActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetThrowLocation() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AThrowableItem();
    
    // Fix for true pure virtual functions not being implemented
};

