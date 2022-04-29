#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "SpaceRigBarMenuItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpaceRigBarMenuItem : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* Drink;
    
public:
    USpaceRigBarMenuItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select();
    
};

