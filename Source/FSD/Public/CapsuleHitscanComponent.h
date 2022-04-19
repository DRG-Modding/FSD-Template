#pragma once
#include "CoreMinimal.h"
#include "MultiHitScanHits.h"
#include "HitscanBaseComponent.h"
#include "OnHitDelegateDelegate.h"
#include "CapsuleHitscanComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCapsuleHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnHitDelegate OnHitEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnHitDelegate OnClosestHit_Client;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPhysMatImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPhysMatDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayPhysMatSound;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActorsInCapsule;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DamagedActorCache;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsHit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMultiHitScanHits Hits;
    
public:
    UCapsuleHitscanComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(const FMultiHitScanHits& hitResults);
    
};

