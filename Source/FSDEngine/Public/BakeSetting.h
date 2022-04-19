#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BakeSetting.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FBakeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VectorValue;
    
    FBakeSetting();
};

