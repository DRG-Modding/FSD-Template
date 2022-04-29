#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveGameIDInterface.h"
#include "FSDPhysicsActor.h"
#include "ItemIDInterface.h"
#include "LoadoutItem.h"
#include "UpgradableGear.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Flare.generated.h"

class AItem;
class AActor;
class UItemID;
class USoundCue;
class AFlare;

UCLASS(Abstract, Blueprintable)
class AFlare : public AFSDPhysicsActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem, public IUpgradableGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float InitialSpeed;
    
    UPROPERTY(EditAnywhere)
    float InitialAngularImpulse;
    
    UPROPERTY(EditAnywhere)
    float InitialAngularImpulseRandomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFlares;
    
    UPROPERTY(EditAnywhere)
    float ProductionTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChromaColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFlareOn, meta=(AllowPrivateAccess=true))
    bool IsFlareOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WeaponPreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> LoadoutItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactGroundSound;
    
public:
    AFlare();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

