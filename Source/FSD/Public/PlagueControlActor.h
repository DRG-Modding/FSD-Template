#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TerrainDetectInterface.h"
#include "PlacementObstruction.h"
#include "PlagueControlActor.generated.h"

class UTerrainMaterial;
class UNiagaraComponent;
class UPlagueUsable;
class ACleanupPodItem;
class APlagueInfectionNode;
class APlayerCharacter;

UCLASS(Blueprintable)
class APlagueControlActor : public AActor, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPlacementObstruction> Obstructions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DebrisLightSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlagueUsable* CallWeaponPodUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TargetPlagueMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACleanupPodItem> CleanupPodItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenWeaponPods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistBetweenPods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanCallPodDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreDebrisLightSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebrisLightDistanceFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveDebrisLightUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawDebrisLight;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlagueInfectionNode> TargetedPlagueNode;
    
public:
    APlagueControlActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnPodHack(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCanUseWeaponPod(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void PushDebrisLights();
    
    UFUNCTION(BlueprintCallable)
    void EquipPlaguePod(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropWeaponPod(float& timeLeft);
    
    
    // Fix for true pure virtual functions not being implemented
};

