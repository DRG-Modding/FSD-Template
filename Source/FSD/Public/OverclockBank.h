#pragma once
#include "CoreMinimal.h"
#include "SchematicBankInterface.h"
#include "Engine/DataAsset.h"
#include "OverclockBank.generated.h"

class UOverclockUpgrade;
class USchematic;
class UItemID;

UCLASS(Blueprintable)
class FSD_API UOverclockBank : public UDataAsset, public ISchematicBankInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UOverclockUpgrade*, USchematic*> Overclocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* OwningItem;
    
    UOverclockBank();
    
    // Fix for true pure virtual functions not being implemented
};

