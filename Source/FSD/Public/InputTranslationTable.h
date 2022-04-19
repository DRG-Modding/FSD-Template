#pragma once
#include "CoreMinimal.h"
#include "InputTranslation.h"
#include "InputTranslationTable.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslationTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInputTranslation> Entries;
    
public:
    FSD_API FInputTranslationTable();
};

