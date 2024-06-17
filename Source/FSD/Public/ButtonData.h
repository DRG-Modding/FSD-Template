#pragma once
#include "CoreMinimal.h"
#include "DetailedTagSet.h"
#include "ButtonData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetailedTagSet Tags;
    
    FSD_API FButtonData();
};

