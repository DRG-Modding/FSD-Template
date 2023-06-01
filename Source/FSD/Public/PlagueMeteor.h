#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "DropInfo.h"
#include "Templates/SubclassOf.h"
#include "PlagueMeteor.generated.h"

class AImpactIndicator;
class AProceduralSetup;
class ARockCrackerPod;
class UDamageComponent;
class UDebrisPositioning;
class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTerrainPlacementComponent;

UCLASS(Blueprintable)
class FSD_API APlagueMeteor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeteorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* ImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManuallyTargeted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> stages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CrackStage, meta=(AllowPrivateAccess=true))
    int32 CrackStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DropInfo, meta=(AllowPrivateAccess=true))
    FDropInfo DropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactIndicator> DropzoneIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AImpactIndicator* DropZoneIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DropDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndicatorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearImpactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAudioTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DropImpactCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARockCrackerPod> RockCrackerPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RockCrackerIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* RockCrackerPodPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ARockCrackerPod*> SpawnedPods;
    
public:
    APlagueMeteor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SignalEventStarted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SignalEventEnded(bool wasSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStage(int32 Stage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDropTarget(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void ResetStage();
    
    UFUNCTION(BlueprintCallable)
    void RegressStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageAdvanced(int32 Stage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DropInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrackStage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NearImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LastaudioSignal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Impacted_Latejoin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Impacted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLandedOnTopOfRefineryPipes(float minDistanceToPipes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARockCrackerPod*> GetPods();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARockCrackerPod* GetPodAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActivePods() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropRockCrackerPods(int32 Amount, float MinRadius, float maRadius, AProceduralSetup* Setup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAndSpawnHearts_FailSafe();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceStage();
    
};

