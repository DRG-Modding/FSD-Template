#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoolDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "PlayerBufferComponent.generated.h"

class APlayerCharacter;
class UHealthComponentBase;
class UMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ManualMeshReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BufferParticleSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleTangentSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnBuffingChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBuffedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> BuffTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ParticleInstances;
    
public:
    UPlayerBufferComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetBuffingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ReducePushAmount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied(UHealthComponentBase* Health);
    
};

