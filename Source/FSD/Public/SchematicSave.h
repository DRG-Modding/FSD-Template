#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SchematicSave.generated.h"

USTRUCT(BlueprintType)
struct FSchematicSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid PendingReward;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bFirstSchematicMessageShown;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ForgedSchematics;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OwnedSchematics;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SkinFixupCounter;
    
public:
    FSD_API FSchematicSave();
};

