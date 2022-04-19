#pragma once
#include "CoreMinimal.h"
#include "SchematicBankBase.h"
#include "SchematicBank.generated.h"

class USchematic;

UCLASS(BlueprintType)
class FSD_API USchematicBank : public USchematicBankBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USchematic*> Schematics;
    
public:
    USchematicBank();
    UFUNCTION(BlueprintCallable)
    void AddSchematic(USchematic* Schematic);
    
};

