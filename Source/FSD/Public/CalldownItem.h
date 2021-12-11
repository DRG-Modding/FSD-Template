#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "UObject/NoExportTypes.h"
#include "CalldownItem.generated.h"

class AActor;
class UResourceData;
class UItemPlacerAggregator;
class ARessuplyPod;

UCLASS()
class ACalldownItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResouceRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText OrderDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText LogText;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ResupplyBeacon;
    
    UPROPERTY(Export, Transient)
    UItemPlacerAggregator* ItemPlacerInstance;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CooldownRemaining;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Call_Resupply(const FVector& Location);
    
public:
    ACalldownItem();
};

