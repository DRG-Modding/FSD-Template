#pragma once
#include "CoreMinimal.h"
#include "SubObjective.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FSubObjective {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnProgressShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnCompletedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Required;
    
    UPROPERTY(BlueprintReadOnly)
    int32 count;
    
    FSD_API FSubObjective();
};

