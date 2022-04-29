#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.h"
#include "CustomUsable.generated.h"

class UUsableComponentBase;

USTRUCT(BlueprintType)
struct FCustomUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomUsableType TerminationType;
    
    FSD_API FCustomUsable();
};

