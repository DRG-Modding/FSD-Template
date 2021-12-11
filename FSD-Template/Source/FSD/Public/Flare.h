#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
#include "FSDPhysicsActor.h"
#include "SaveGameIDInterface.h"
#include "UpgradableGear.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Flare.generated.h"

class AActor;
class AItem;
class UItemID;
class USoundCue;
class AFlare;

UCLASS(Abstract)
class AFlare : public AFSDPhysicsActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem, public IUpgradableGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialAngularImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialAngularImpulseRandomScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProductionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ChromaColor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFlareOn)
    bool IsFlareOn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> WeaponPreviewClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItem> LoadoutItem;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateShadowRadius();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFlareOn();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnFlareSpawnCompleted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlareIgnite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlareExtinguish();
    
public:
    UFUNCTION(BlueprintCallable)
    void Inhibit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFlare* GetFlareDefaultObject(TSubclassOf<AFlare> flareClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateFlare();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFlare();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

