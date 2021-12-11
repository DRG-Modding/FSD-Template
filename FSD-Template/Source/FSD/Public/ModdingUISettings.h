#pragma once
#include "CoreMinimal.h"
#include "ModdingUISettings.generated.h"

USTRUCT(BlueprintType)
struct FModdingUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 SortField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SortAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<uint8> ServerFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowSandboxLabel;
    
    FSD_API FModdingUISettings();
};

