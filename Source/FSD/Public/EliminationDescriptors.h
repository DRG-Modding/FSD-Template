#pragma once
#include "CoreMinimal.h"
#include "EliminationDescriptors.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEliminationDescriptors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> Descriptors;
    
    FSD_API FEliminationDescriptors();
};

