#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "ERessuplyPodState.h"
#include "UObject/NoExportTypes.h"
#include "PipelineFinish.generated.h"

class ATrackBuilderSegment;
class USingleUsableComponent;
class UTrackBuilderConnectPoint;
class APipelineExtractorPod;
class ARessuplyPod;
class APlayerCharacter;
class APipelineSegment;

UCLASS(Abstract)
class FSD_API APipelineFinish : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackBuilderConnectPoint* PipelineEndConnection;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UsableOrderExtractor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APipelineExtractorPod> ExtractPodClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ExtractorPod)
    APipelineExtractorPod* ExtractorPod;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PipelineCompleted)
    bool bPipelineCompleted;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PipelineCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractorPod();
    
    UFUNCTION(BlueprintCallable)
    void OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, ERessuplyPodState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnExtractorPodOrdered(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedSegmentActivated(APipelineSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLandingOffset();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineFinish();
};

