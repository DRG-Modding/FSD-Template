#pragma once
#include "CoreMinimal.h"
#include "Grenade.h"
#include "UObject/NoExportTypes.h"
#include "Targetable.h"
#include "EnhancedTrace.h"
#include "Engine/EngineTypes.h"
#include "DamageEnhancer.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UHealthComponent;
class UDamageComponent;
class USphereComponent;
class UHitscanComponent;
class UReflectionHitscanComponent;
class UCapsuleHitscanComponent;
class UHitscanBaseComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ADamageEnhancer : public AGrenade, public ITargetable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RootCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReflectionHitscanComponent* ReflectionHitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleHitscanComponent* CapsuleHitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnhanceDamageBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifetimeMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnabledDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceStepTime;
    
public:
    ADamageEnhancer();
protected:
    UFUNCTION(BlueprintCallable)
    void HitByHitScan(UHitscanBaseComponent* Component, const FVector& HitPoint, const FVector& Origin);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CompleteTrace(const FEnhancedTrace& trace);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginOverlapVsProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_PasteHitScanComponent(UHitscanBaseComponent* HitScan);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_PasteDamageComponent(UDamageComponent* Damage);
    
    
    // Fix for true pure virtual functions not being implemented
};

