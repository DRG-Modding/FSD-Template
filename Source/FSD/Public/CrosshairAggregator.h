#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemAggregator.h"
#include "Upgradable.h"
#include "CrosshairAggregator.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrosshairAggregatorOnCrosshairCreated, UUserWidget*, Crosshair);

UCLASS()
class UCrosshairAggregator : public UItemAggregator, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCrosshairAggregatorOnCrosshairCreated OnCrosshairCreated;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUserWidget* CrosshairWidget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> CrossHairType;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCrosshair(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetOrCreateCrosshair();
    
    UCrosshairAggregator();
    
    // Fix for true pure virtual functions not being implemented
};

