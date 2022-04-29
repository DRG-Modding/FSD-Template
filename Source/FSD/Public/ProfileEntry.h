#pragma once
#include "CoreMinimal.h"
#include "ProfileEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FProfileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimeSpent;
    
    FSD_API FProfileEntry();
};

