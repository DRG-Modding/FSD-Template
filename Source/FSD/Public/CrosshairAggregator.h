#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "ItemAggregator.h"
#include "CrosshairCreatedDelegate.h"
#include "CrosshairAggregator.generated.h"

class APlayerController;
class UUserWidget;
class UObject;
class UCustomAmmoCountWidget;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrosshairAggregator : public UItemAggregator, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCrosshairCreated OnCrosshairCreated;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* CrosshairWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CrossHairType;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCustomAmmoCountWidget* CustomAmmoCounterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomAmmoCountWidget> CustomAmmoCounterType;
    
public:
    UCrosshairAggregator();
    UFUNCTION(BlueprintCallable)
    void SetCrosshair(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetOrCreateCrosshair();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCustomAmmoCountWidget* GetCustomAmmoCounterWidget(UObject* WorldContext, APlayerController* InOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

