#pragma once
#include "CoreMinimal.h"
#include "PlaceableInterface.h"
#include "RessuplyPodItem.h"
#include "EPlaceableObstructionType.h"
#include "UObject/NoExportTypes.h"
#include "CleanupPodItem.generated.h"

class APlagueControlActor;
class APlagueInfectionNode;

UCLASS(Blueprintable)
class ACleanupPodItem : public ARessuplyPodItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlagueControlActor> PlagueController;
    
public:
    ACleanupPodItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidget(EPlaceableObstructionType reason, float timeLeft);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Call_CleaningPod(const FVector& Location, APlagueInfectionNode* plagueNode);
    
    UFUNCTION(BlueprintCallable)
    void CallUpdateWidget();
    
    
    // Fix for true pure virtual functions not being implemented
};

