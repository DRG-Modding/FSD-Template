#pragma once
#include "CoreMinimal.h"
#include "MultiHitScanHits.h"
#include "HitscanBaseComponent.h"
#include "HitDelegateDelegate.h"
#include "MultiHitscanComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMultiHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHitDelegate OnHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BulletsPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralImpactAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CountMultiHits;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DamagedActorCache;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMultiHitScanHits Hits;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsHit;
    
public:
    UMultiHitscanComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(const FMultiHitScanHits& hitResults);
    
};

