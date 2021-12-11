#pragma once
#include "CoreMinimal.h"
#include "EDialogRestriction.h"
#include "DialogStruct.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FDialogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundBase> Audio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDialogRestriction Restriction;
    
    FSD_API FDialogStruct();
};

