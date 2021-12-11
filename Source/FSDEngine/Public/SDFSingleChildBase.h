#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSingleChildBase.generated.h"

UCLASS()
class USDFSingleChildBase : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    USDFBase* Child;
    
    USDFSingleChildBase();
};

