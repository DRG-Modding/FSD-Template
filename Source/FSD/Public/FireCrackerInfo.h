#pragma once
#include "CoreMinimal.h"
#include "FireCrackerInfo.generated.h"

USTRUCT(BlueprintType)
struct FFireCrackerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Connections;
    
    FSD_API FFireCrackerInfo();
};

