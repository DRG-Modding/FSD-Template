#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PerkHUDWidget.generated.h"

class UPerkAsset;
class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* PerkAsset;
    
public:
    UPerkHUDWidget();
    UFUNCTION(BlueprintCallable)
    void SetPerkAsset(UPerkAsset* InPerk);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePerkAssetChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
};

