#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TreeOfVanityItemWidget.generated.h"

class UReward;
class UTreeOfVanityItemWidget;

UCLASS(EditInlineNew)
class FSD_API UTreeOfVanityItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrimaryReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartingNode;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UTreeOfVanityItemWidget*> ConnectedNodes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsClickable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* DefaultReward;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> NodeConnections;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBought;
    
public:
    UTreeOfVanityItemWidget();
    UFUNCTION(BlueprintCallable)
    void SetIsBought(bool inIsBought);
    
    UFUNCTION(BlueprintCallable)
    void SetData(UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<UTreeOfVanityItemWidget*> inConnectedNodes, int32 inNodeID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBought();
    
};

