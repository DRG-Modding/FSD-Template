#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "OverclockShematicItem.generated.h"

class UItemID;
class UItemUpgrade;
class UUpgradableGearComponent;

UCLASS(Blueprintable, EditInlineNew)
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

