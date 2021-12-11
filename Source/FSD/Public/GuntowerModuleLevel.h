#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GuntowerModuleLevel.generated.h"

class AGuntowerModule;

USTRUCT(BlueprintType)
struct FGuntowerModuleLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AGuntowerModule>> PossibleModules;
    
    UPROPERTY(EditAnywhere)
    bool PreventDuplication;
    
    FSD_API FGuntowerModuleLevel();
};

