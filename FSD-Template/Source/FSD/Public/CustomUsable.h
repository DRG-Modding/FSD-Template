#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.h"
#include "CustomUsable.generated.h"

class UUsableComponentBase;

USTRUCT()
struct FCustomUsable {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UUsableComponentBase* Usable;
    
    UPROPERTY()
    ECustomUsableType TerminationType;
    
    FSD_API FCustomUsable();
};

