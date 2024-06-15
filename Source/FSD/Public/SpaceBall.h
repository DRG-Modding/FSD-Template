#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "SpaceBall.generated.h"

UCLASS(Blueprintable)
class ASpaceBall : public ACarriableItem {
    GENERATED_BODY()
public:
    ASpaceBall(const FObjectInitializer& ObjectInitializer);

};

