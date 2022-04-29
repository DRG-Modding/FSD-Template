#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseResource.generated.h"

UCLASS(Blueprintable)
class UBaseResource : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseResource();
};

