#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreasureContainer.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "TreasureBox.generated.h"

class UTerrainPlacementComponent;
class UAnimSequenceBase;
class URepairableComponent;
class UStaticMeshComponent;
class URepairableUsable;
class AActor;
class USkeletalMeshComponent;
class USingleUsableComponent;
class UTreasureRewarder;
class AProceduralSetup;
class UDebrisPositioning;
class UCurveFloat;
class APlayerCharacter;

UCLASS()
class FSD_API ATreasureBox : public ATreasureContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URepairableComponent* repairable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URepairableUsable* RepairUsable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* HammeringUsable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MiddlePlane;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoxMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Batteries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OpenBoxAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToOpenAfterRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UTreasureRewarder* boxRewarder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HologramRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ItemsInserted;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsTreasureAvailable;
    
public:
    ATreasureBox();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

