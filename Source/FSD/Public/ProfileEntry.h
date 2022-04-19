#pragma once
#include "CoreMinimal.h"
#include "ProfileEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FProfileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Context;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float TimeSpent;
    
    FSD_API FProfileEntry();
};

