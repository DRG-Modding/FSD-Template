#pragma once
#include "CoreMinimal.h"
#include "EKeyBindingAxis.h"
#include "CustomKeySetting.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeySetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SaveID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKeyBindingAxis ActionAxis;
    
    FSD_API FCustomKeySetting();
};

