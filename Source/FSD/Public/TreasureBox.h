#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "Templates/SubclassOf.h"
#include "TreasureContainer.h"
#include "TreasureBox.generated.h"

class AActor;
class APlayerCharacter;
class AProceduralSetup;
class UAnimSequenceBase;
class UCurveFloat;
class UDebrisPositioning;
class URepairableComponent;
class URepairableUsable;
class USingleUsableComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTerrainPlacementComponent;
class UTreasureRewarder;

UCLASS(Blueprintable)
class FSD_API ATreasureBox : public ATreasureContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairableComponent* repairable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairableUsable* RepairUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* HammeringUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MiddlePlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoxMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Batteries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OpenBoxAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToOpenAfterRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTreasureRewarder* boxRewarder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HologramRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ItemsInserted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsTreasureAvailable;
    
public:
    ATreasureBox();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void PlaceResources(AProceduralSetup* Setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    
    UFUNCTION(BlueprintCallable)
    void OnUsedEvent(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRepairedEvent(URepairableComponent* repaired);
    
    UFUNCTION(BlueprintCallable)
    void OnHammerProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void OnHammered(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnFullyRepairedEvent(URepairableComponent* repaired);
    
    UFUNCTION(BlueprintCallable)
    void OnAllResourcesCollectedEvent(URepairableComponent* repaired);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollectedTreasure(APlayerCharacter* collector);
    
    UFUNCTION(BlueprintCallable)
    void AfterRepairDelay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateCollection();
    
};

