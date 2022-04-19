#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
#include "UObject/NoExportTypes.h"
#include "TowerEventModule.generated.h"

class USoundCue;
class USceneComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UEnemyHealthComponent;
class ATowerEventModule;
class UArmorHealthDamageComponent;
class UWeakpointGlowComponent;
class USkeletalMesh;
class UParticleSystem;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class FSD_API ATowerEventModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UArmorHealthDamageComponent* ArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWeakpointGlowComponent* WeakpointGlow;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SmokeParticles;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator MainBodyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATowerEventModule* PreviousModule;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATowerEventModule* NextModule;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPopForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorShedDelay;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ArmorMeshes;
    
public:
    ATowerEventModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable)
    void HideArmorPlates();
    
    UFUNCTION(BlueprintCallable)
    void DestroyArmor();
    
    
    // Fix for true pure virtual functions not being implemented
};

