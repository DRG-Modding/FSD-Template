#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
#include "UObject/NoExportTypes.h"
#include "TowerEventModule.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UWeakpointGlowComponent;
class UParticleSystemComponent;
class UEnemyHealthComponent;
class USoundCue;
class UArmorHealthDamageComponent;
class USkeletalMesh;
class UParticleSystem;
class ATowerEventModule;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class FSD_API ATowerEventModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
    UPROPERTY(Export, VisibleAnywhere)
    UArmorHealthDamageComponent* ArmorDamage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UWeakpointGlowComponent* WeakpointGlow;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* SmokeParticles;
    
protected:
    UPROPERTY(Transient)
    FRotator MainBodyRotation;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ExplosionSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(Replicated, Transient)
    ATowerEventModule* PreviousModule;
    
    UPROPERTY(Replicated, Transient)
    ATowerEventModule* NextModule;
    
private:
    UPROPERTY(EditAnywhere)
    UStaticMesh* ArmorMesh;
    
    UPROPERTY(EditAnywhere)
    int32 ArmorPieces;
    
    UPROPERTY(EditAnywhere)
    float ArmorLifetime;
    
    UPROPERTY(EditAnywhere)
    float ArmorPopForce;
    
    UPROPERTY(EditAnywhere)
    float ArmorShedDelay;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> ArmorMeshes;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable)
    void HideArmorPlates();
    
    UFUNCTION(BlueprintCallable)
    void DestroyArmor();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATowerEventModule();
    
    // Fix for true pure virtual functions not being implemented
};

