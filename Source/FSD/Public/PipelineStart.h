#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPipelineBuildState.h"
#include "PipelineStart.generated.h"

class AFSDRefinery;
class APipelineFinish;
class APipelineSegment;
class APipelineStart;
class ATrackBuilderSegment;
class UTrackBuilderUsable;

UCLASS(Abstract, Blueprintable)
class APipelineStart : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPipelineStartStateDelegate, APipelineStart*, InPipelineStart, EPipelineBuildState, InPipelineState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPipelineStartStateDelegate OnBuildStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PipelineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackBuilderUsable* PipelineStartUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BuildState, meta=(AllowPrivateAccess=true))
    EPipelineBuildState BuildState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APipelineFinish* PipelineFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDRefinery* Refinery;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APipelineSegment>> BrokenSegments;
    
public:
    APipelineStart();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

