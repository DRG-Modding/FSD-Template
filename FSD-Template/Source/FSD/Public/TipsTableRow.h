#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TipsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FTipsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Header;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText InputText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText InputTextControllerOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToDisplay;
    
    FSD_API FTipsTableRow();
};

