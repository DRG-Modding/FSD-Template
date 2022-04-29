#pragma once
#include "CoreMinimal.h"
#include "ModdingUISettings.generated.h"

USTRUCT(BlueprintType)
struct FModdingUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 SortField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SortAscending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<uint8> ServerFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSandboxLabel;
    
    FSD_API FModdingUISettings();
};

