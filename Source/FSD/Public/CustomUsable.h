#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.h"
#include "CustomUsable.generated.h"

class UUsableComponentBase;

USTRUCT()
struct FCustomUsable {
    GENERATED_BODY()
public:
    UPROPERTY(Export, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* Usable;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    ECustomUsableType TerminationType;
    
    FSD_API FCustomUsable();
};

