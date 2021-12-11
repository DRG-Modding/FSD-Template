#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ExplosionBaseComponent.generated.h"

class UPrimitiveComponent;
class UDamageComponent;
class UPhysicalMaterial;

UCLASS(BlueprintType)
class UExplosionBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveDiameterCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNoiseCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveBurnThicknessCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNormalOffsetCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNormalSqueeze;
    
public:
    UFUNCTION(BlueprintCallable)
    void DamageOnlyFromHit(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageArmorClients(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageAndCarveFromHit(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CarveOnly(FVector Location, FVector ImpactNormal);
    
    UExplosionBaseComponent();
};

