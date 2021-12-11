#pragma once
#include "CoreMinimal.h"
#include "FSDServerListEntryModModel.generated.h"

USTRUCT(BlueprintType)
struct FFSDServerListEntryModModel {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    int32 Category;
    
    UPROPERTY()
    FString Version;
    
    FSD_API FFSDServerListEntryModModel();
};

