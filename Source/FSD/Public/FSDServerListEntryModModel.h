#pragma once
#include "CoreMinimal.h"
#include "FSDServerListEntryModModel.generated.h"

USTRUCT(BlueprintType)
struct FFSDServerListEntryModModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    FSD_API FFSDServerListEntryModModel();
};

