#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SchematicGADataEntry.generated.h"

USTRUCT(BlueprintType)
struct FSchematicGADataEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SchematicGAID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SchematicName;
    
    FSD_API FSchematicGADataEntry();
};

