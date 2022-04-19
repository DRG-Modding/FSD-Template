#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecalData.h"
#include "StickyFlame.generated.h"

class UStatusEffectTriggerComponent;
class UParticleSystemComponent;
class UAudioComponent;

UCLASS()
class AStickyFlame : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlameParticles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStatusEffectTriggerComponent* StatusTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameExtinguishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
public:
    AStickyFlame();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable)
    void OnExtinguisFlame();
    
};

