#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
#include "GameFramework/Actor.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Grenade.generated.h"

class UProjectileMovementComponent;
class ALoadoutItemProxy;
class UItemID;
class UStaticMesh;
class USoundCue;
class UParticleSystem;
class UGrenadeAnimationSet;
class AGrenade;
class AItem;

UCLASS()
class AGrenade : public AActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExplodeOnImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxGrenades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HasExploded)
    bool HasExploded;
    
    UPROPERTY(EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> WeaponPreviewClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* HandAttachMesh;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ImpactGroundParticles;
    
    UPROPERTY(EditAnywhere)
    UGrenadeAnimationSet* GrenadeAnimationSetOverride;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasExploded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExploded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonFriendlyPawn(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonFriendly(AActor* Actor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGrenade* GetGrenadeDefaultObject(TSubclassOf<AGrenade> GrenadeClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGrenade();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

