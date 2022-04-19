#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HackingToolWidget.generated.h"

class USoundCue;
class UDialogDataAsset;
class UHackingUsableComponent;
class AHackingToolItem;

UCLASS(Abstract, EditInlineNew)
class FSD_API UHackingToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHackingUnequipDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHackingStageCompletedDelegate, int32, InNextStage, int32, InTotalStages);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHackingFailDelegate, USoundCue*, InFailCue, UDialogDataAsset*, InShout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackingCompleteDelegate, bool, InSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHackingFailDelegate OnHackingFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHackingStageCompletedDelegate OnHackingStageCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHackingCompleteDelegate OnHackingCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHackingUnequipDelegate OnRequestUnequipHackingTool;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHackingToolItem> HackingTool;
    
public:
    UHackingToolWidget();
    UFUNCTION(BlueprintCallable)
    void StartHacking(UHackingUsableComponent* InHackingUsable, AHackingToolItem* InHackingTool);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnequipHackingTool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHackingToolUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHackingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClick();
    
    UFUNCTION(BlueprintCallable)
    void HackingStageComplete(int32 InNextStage, int32 InTotalStages);
    
    UFUNCTION(BlueprintCallable)
    void HackingComplete(bool InSuccess);
    
};

