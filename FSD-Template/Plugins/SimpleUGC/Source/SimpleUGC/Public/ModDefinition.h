#pragma once
#include "CoreMinimal.h"
#include "ModDefinition.generated.h"

USTRUCT(BlueprintType)
struct FModDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Version;
    
    SIMPLEUGC_API FModDefinition();
};

