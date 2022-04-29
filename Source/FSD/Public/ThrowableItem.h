#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "UObject/NoExportTypes.h"
#include "ThrowableItem.generated.h"

class UAnimMontage;
class AThrowableActor;
class UItemUpgrade;
class AItem;
class AActor;

UCLASS(Blueprintable)
class AThrowableItem : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrowableActor> ThrowableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPThrowMontage;
    
    UPROPERTY(EditAnywhere)
    float ThrowVelocity;
    
    UPROPERTY(EditAnywhere)
    float InheritOwnerVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float ThrowAngle;
    
    UPROPERTY(EditAnywhere)
    float CooldownAfterThrow;
    
    UPROPERTY(EditAnywhere)
    float CooldownAfterDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanThrowBeforeEquipAnimFinish;
    
    UPROPERTY(EditAnywhere)
    float ThrowDelay;
    
    UPROPERTY(EditAnywhere)
    float ThrowZOffset;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float CooldownLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> LoadoutItem;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors;
    
public:
    AThrowableItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
    
    // Fix for true pure virtual functions not being implemented
};

