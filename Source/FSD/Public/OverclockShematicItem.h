#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "OverclockShematicItem.generated.h"

class UUpgradableGearComponent;
class UItemID;
class UItemUpgrade;

UCLASS(EditInlineNew)
class FSD_API UOverclockShematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* OwningItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemUpgrade* Overclock;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUpgradableGearComponent* GetOwningGearComponent() const;
    
    UOverclockShematicItem();
};

