#pragma once
#include "CoreMinimal.h"
#include "EmitterConnection.generated.h"

USTRUCT(BlueprintType)
struct FEmitterConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    FSD_API FEmitterConnection();
};

