#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DropInfo.generated.h"

USTRUCT(BlueprintType)
struct FDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasLanded;
    
    FSD_API FDropInfo();
};

