#pragma once
#include "CoreMinimal.h"
#include "EKeyBindingAxis.h"
#include "CustomKeySetting.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyBindingAxis ActionAxis;
    
    FSD_API FCustomKeySetting();
};

