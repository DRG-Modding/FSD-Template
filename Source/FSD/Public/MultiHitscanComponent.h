#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitscanBaseComponent.h"
#include "MultiHitScanHits.h"
#include "MultiHitscanComponent.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMultiHitscanComponentOnHit, const FHitResult&, Hit, bool, AlwaysPenetrate);

UCLASS()
class UMultiHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FMultiHitscanComponentOnHit OnHit;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 BulletsPerShot;
    
    UPROPERTY(EditAnywhere)
    float MuzzleRadius;
    
    UPROPERTY(EditAnywhere)
    float GeneralImpactAudioVolume;
    
    UPROPERTY(Transient)
    TArray<AActor*> DamagedActorCache;
    
    UPROPERTY(Transient)
    FMultiHitScanHits Hits;
    
    UPROPERTY(Transient)
    TArray<AActor*> ActorsHit;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(const FMultiHitScanHits& hitResults);
    
public:
    UMultiHitscanComponent();
};

