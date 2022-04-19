#pragma once
#include "CoreMinimal.h"
#include "HitscanBaseComponent.h"
#include "HitDelegateDelegate.h"
#include "IRandRange.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "HitscanComponent.generated.h"

class AActor;
class UFXSystemAsset;
class USoundCue;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHitDelegate OnHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BulletsCanCarve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange NormalBulletsPerCarvingOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveDiameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveDebrisSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralImpactAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyUseImpactEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreAlwaysPenetrate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DamagedActorCache;
    
public:
    UHitscanComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
    
};

