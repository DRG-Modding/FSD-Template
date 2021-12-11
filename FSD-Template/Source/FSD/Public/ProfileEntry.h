#pragma once
#include "CoreMinimal.h"
#include "ProfileEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FProfileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UObject> Context;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Category;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeSpent;
    
    FSD_API FProfileEntry();
};

