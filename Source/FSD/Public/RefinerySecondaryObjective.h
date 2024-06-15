#pragma once
#include "CoreMinimal.h"
#include "ERefinerySecondaryState.h"
#include "Objective.h"
#include "RefinerySecondaryObjective.generated.h"

class AActor;
class ARefineryExtractorPod;
class UDebrisPositioning;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URefinerySecondaryObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RawMaterialClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* RawMaterialPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawmaterialMinDistanceToDropPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARefineryExtractorPod> DropPodMaterialExtractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DropPodMaterialExtractor_Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* ExtractorPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractorLandingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractMinZDistanceToRawMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERefinerySecondaryState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtractionProgress, meta=(AllowPrivateAccess=true))
    int32 ExtractionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtractionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtractorPodInstance, meta=(AllowPrivateAccess=true))
    ARefineryExtractorPod* ExtractorPodInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* RefineryWellInstance;
    
public:
    URefinerySecondaryObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartExtraction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWellHasSpawned(AActor* extractor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWellAndExtractorConnected();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPipelineBuild();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(ERefinerySecondaryState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractorPodInstance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractionProgress();
    
};

