#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitscanBaseComponent.h"
#include "IRandRange.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "HitscanComponent.generated.h"

class USoundCue;
class AActor;
class UFXSystemAsset;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitscanComponentOnHit, const FHitResult&, Hit, bool, AlwaysPenetrate);

UCLASS()
class UHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHitscanComponentOnHit OnHit;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool BulletsCanCarve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange NormalBulletsPerCarvingOne;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveDiameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNoise;
    
    UPROPERTY(EditAnywhere)
    float CarveDebrisSize;
    
    UPROPERTY(EditAnywhere)
    float GeneralImpactAudioVolume;
    
    UPROPERTY(EditAnywhere)
    float ImpactDelay;
    
    UPROPERTY(EditAnywhere)
    bool OnlyUseImpactEffects;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ImpactParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreAlwaysPenetrate;
    
    UPROPERTY(Transient)
    TArray<AActor*> DamagedActorCache;
    
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
    
public:
    UHitscanComponent();
};

