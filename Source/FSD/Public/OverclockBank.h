#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SchematicBankInterface.h"
#include "OverclockBank.generated.h"

class USchematic;
class UItemID;
class UOverclockUpgrade;

UCLASS()
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

