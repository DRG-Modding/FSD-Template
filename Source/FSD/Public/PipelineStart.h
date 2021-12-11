#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPipelineBuildState.h"
#include "PipelineStart.generated.h"

class ATrackBuilderSegment;
class APipelineFinish;
class APipelineStart;
class AFSDRefinery;
class UTrackBuilderUsable;
class APipelineSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPipelineStartOnBuildStateChanged, APipelineStart*, InPipelineStart, EPipelineBuildState, InPipelineState);

UCLASS(Abstract)
class FSD_API APipelineStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPipelineStartOnBuildStateChanged OnBuildStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PipelineID;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackBuilderUsable* PipelineStartUsable;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_BuildState)
    EPipelineBuildState BuildState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    APipelineFinish* PipelineFinish;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AFSDRefinery* Refinery;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<APipelineSegment>> BrokenSegments;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBuildStateChanged(EPipelineBuildState InBuildState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PipelineCompleted(APipelineFinish* InPipelineFinish);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildState();
    
    UFUNCTION(BlueprintCallable)
    void OnNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APipelineSegment*> GetAllPipelineSegments() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineStart();
};

