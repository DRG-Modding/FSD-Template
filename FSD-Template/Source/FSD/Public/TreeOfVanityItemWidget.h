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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPrimaryReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStartingNode;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UTreeOfVanityItemWidget*> ConnectedNodes;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsClickable;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UReward* DefaultReward;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UUserWidget*> NodeConnections;
    
    UPROPERTY(Transient)
    bool bIsBought;
    
public:
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
    
    UTreeOfVanityItemWidget();
};

