#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GuntowerModuleLevel.generated.h"

class AGuntowerModule;

USTRUCT(BlueprintType)
struct FGuntowerModuleLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGuntowerModule>> PossibleModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventDuplication;
    
    FSD_API FGuntowerModuleLevel();
};

