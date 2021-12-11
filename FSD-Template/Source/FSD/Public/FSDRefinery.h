#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DropPod.h"
#include "ERefineryState.h"
#include "EInputKeys.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPipelineBuildState.h"
#include "FSDRefinery.generated.h"

class APipelineExtractorPod;
class APipelineStart;
class APipelineSegment;
class USingleUsableComponent;
class UDialogDataAsset;
class ATrackBuilderItem;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDRefineryOnRefineryStateChanged, ERefineryState, InRefineryState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDRefineryOnRefineryProgressChanged, float, InProgress01);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDRefineryOnPipelineRegistered, APipelineStart*, InPipelineStart);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDRefineryOnPipelineSegmentPlaced, APipelineSegment*, InSegment);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDRefineryOnExtractorPodSpawned, APipelineExtractorPod*, InExtractorPod);

UCLASS()
class AFSDRefinery : public ADropPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDRefineryOnRefineryStateChanged OnRefineryStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDRefineryOnRefineryProgressChanged OnRefineryProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDRefineryOnPipelineRegistered OnPipelineRegistered;
    
    UPROPERTY(BlueprintAssignable)
    FFSDRefineryOnPipelineSegmentPlaced OnPipelineSegmentPlaced;
    
    UPROPERTY(BlueprintAssignable)
    FFSDRefineryOnExtractorPodSpawned OnExtractorPodSpawned;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UsableStartRefining;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UsableLaunchRocket;
    
    UPROPERTY(EditAnywhere)
    TMap<float, UDialogDataAsset*> ProgressMissionShouts;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* LaunchRocketButtonPressedShout;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATrackBuilderItem> BuilderItem;
    
    UPROPERTY(EditAnywhere)
    float RefiningTotalDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatRange PipelineBreakCoolDown;
    
    UPROPERTY(EditAnywhere)
    float PipelineBreakTimePenaltyPerAdditionalPlayers;
    
    UPROPERTY(EditAnywhere)
    FInt32Range MaxSegmentBreakDowns;
    
    UPROPERTY(EditAnywhere)
    int32 SegmentBreakDownPenaltyPerAdditionalPlayers;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RefineryState)
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadOnly)
    ERefineryState PreviousRefineryState;
    
    UPROPERTY(Replicated)
    uint8 RefiningProgressReplicated;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<APipelineStart*> PipelineStarts;
    
    UFUNCTION(BlueprintCallable)
    void SetRefineryState(ERefineryState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefineryStateChanged(ERefineryState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineStateChanged(APipelineStart* InPipeline, EPipelineBuildState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineStartReady(APipelineStart* InPipelineStart);
    
    UFUNCTION(BlueprintCallable)
    void OnStartRefiningPressed(APlayerCharacter* InCharacter, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RefineryState(ERefineryState InOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterRegistered(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectivesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchRocketPressed(APlayerCharacter* InCharacter, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRefiningProgress() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDRefinery();
};

