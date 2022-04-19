#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "BuffingChangedDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "EnemyBufferComponent.generated.h"

class UParticleSystemComponent;
class UStatusEffect;
class UParticleSystem;
class UHealthComponentBase;
class AFSDPawn;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UEnemyBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BufferParticleSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleTangentSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBuffingChangedDelegate OnBuffingChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBuffedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BuffQuery;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFSDPawn*> BuffTargets;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ParticleInstances;
    
public:
    UEnemyBufferComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetBuffingEnabled(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied(UHealthComponentBase* Health);
    
};

