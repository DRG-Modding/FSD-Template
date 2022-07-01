#pragma once
#include "CoreMinimal.h"
#include "SchematicBankInterface.h"
#include "Engine/DataAsset.h"
#include "SchematicBankBase.generated.h"

UCLASS(Blueprintable)
class FSD_API USchematicBankBase : public UDataAsset, public ISchematicBankInterface {
    GENERATED_BODY()
public:
    USchematicBankBase();
    
    // Fix for true pure virtual functions not being implemented
};

