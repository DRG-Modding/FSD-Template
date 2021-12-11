#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SchematicGADataEntry.generated.h"

USTRUCT()
struct FSchematicGADataEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SchematicGAID;
    
    UPROPERTY(VisibleAnywhere)
    FString SchematicName;
    
    FSD_API FSchematicGADataEntry();
};

