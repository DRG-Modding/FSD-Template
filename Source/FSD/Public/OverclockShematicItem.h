#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "OverclockShematicItem.generated.h"

class UItemUpgrade;
class UItemID;
class UUpgradableGearComponent;

UCLASS(EditInlineNew)
class FSD_API UOverclockShematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemUpgrade* Overclock;
    
public:
    UOverclockShematicItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUpgradableGearComponent* GetOwningGearComponent() const;
    
};

