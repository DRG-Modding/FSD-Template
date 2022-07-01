#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "ERessuplyPodState.h"
#include "UObject/NoExportTypes.h"
#include "PipelineFinish.generated.h"

class APipelineExtractorPod;
class UTrackBuilderConnectPoint;
class APlayerCharacter;
class USingleUsableComponent;
class ARessuplyPod;
class ATrackBuilderSegment;
class APipelineSegment;

UCLASS(Abstract, Blueprintable)
class FSD_API APipelineFinish : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTrackBuilderConnectPoint* PipelineEndConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableOrderExtractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APipelineExtractorPod> ExtractPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtractorPod, meta=(AllowPrivateAccess=true))
    APipelineExtractorPod* ExtractorPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PipelineCompleted, meta=(AllowPrivateAccess=true))
    bool bPipelineCompleted;
    
public:
    APipelineFinish();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

