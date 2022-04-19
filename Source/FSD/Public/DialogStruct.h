#pragma once
#include "CoreMinimal.h"
#include "EDialogRestriction.h"
#include "DialogStruct.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FDialogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogRestriction Restriction;
    
    FSD_API FDialogStruct();
};

