#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZipLine.generated.h"

USTRUCT(BlueprintType)
struct FZipLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Start;
    
    UPROPERTY(BlueprintReadOnly)
    FVector End;
    
    FSD_API FZipLine();
};

