#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "SpaceRigBarMenuItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract, EditInlineNew)
class USpaceRigBarMenuItem : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDrinkableDataAsset* Drink;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select();
    
    USpaceRigBarMenuItem();
};

