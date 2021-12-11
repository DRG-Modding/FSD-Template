#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecalData.h"
#include "StickyFlame.generated.h"

class UParticleSystemComponent;
class UAudioComponent;
class UStatusEffectTriggerComponent;

UCLASS()
class AStickyFlame : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FlameParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* Audio;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStatusEffectTriggerComponent* StatusTriggerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDecalData Decal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlameLifetime;
    
    UPROPERTY(EditAnywhere)
    float FlameExtinguishTime;
    
    UPROPERTY(EditAnywhere)
    float AudioFadeOutTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsActive)
    bool IsActive;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable)
    void OnExtinguisFlame();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AStickyFlame();
};

