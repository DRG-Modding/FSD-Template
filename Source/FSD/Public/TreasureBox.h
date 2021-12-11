#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreasureContainer.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "TreasureBox.generated.h"

class AActor;
class UAnimSequenceBase;
class URepairableComponent;
class URepairableUsable;
class UStaticMeshComponent;
class USingleUsableComponent;
class USkeletalMeshComponent;
class UTerrainPlacementComponent;
class UTreasureRewarder;
class AProceduralSetup;
class UDebrisPositioning;
class UCurveFloat;
class APlayerCharacter;

UCLASS()
class FSD_API ATreasureBox : public ATreasureContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URepairableComponent* repairable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URepairableUsable* RepairUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* HammeringUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* MiddlePlane;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BoxMesh;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollectActivationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* OpenBoxAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayToOpenAfterRepair;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> ResourceClass;
    
    UPROPERTY(Export, Transient)
    UTreasureRewarder* boxRewarder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HologramRotationSpeed;
    
    UPROPERTY(Replicated, Transient)
    int32 ItemsInserted;
    
    UPROPERTY(Replicated, Transient)
    bool IsTreasureAvailable;
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATreasureBox();
};

