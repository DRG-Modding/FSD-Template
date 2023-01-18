#pragma once
#include "CoreMinimal.h"
#include "CrosshairCreatedDelegate.h"
#include "ItemAggregator.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "CrosshairAggregator.generated.h"

class APlayerController;
class UCustomAmmoCountWidget;
class UObject;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrosshairAggregator : public UItemAggregator, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairCreated OnCrosshairCreated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* CrosshairWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CrossHairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomAmmoCountWidget* CustomAmmoCounterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomAmmoCountWidget> CustomAmmoCounterType;
    
public:
    UCrosshairAggregator();
    UFUNCTION(BlueprintCallable)
    void SetCrosshair(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetOrCreateCrosshair();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UCustomAmmoCountWidget* GetCustomAmmoCounterWidget(UObject* WorldContext, APlayerController* InOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

