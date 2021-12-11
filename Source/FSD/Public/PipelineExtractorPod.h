#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "PipelineExtractorPod.generated.h"

class APipelineSegment;
class APlayerCharacter;

UCLASS(Abstract)
class FSD_API APipelineExtractorPod : public ARessuplyPod {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ConnectedSegment)
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float TargetRotation;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetTargetRotation(APipelineSegment* InPipelineSegment);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveConnectedToSegment(APipelineSegment* InConnectedSegment);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedSegment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExtractorPodOrderedEvent(APlayerCharacter* InUser);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineExtractorPod();
};

