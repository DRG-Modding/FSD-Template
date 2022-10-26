#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DynamicMeshScaler.generated.h"

UCLASS(Blueprintable)
class UDynamicMeshScaler : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDynamicMeshScaler();
};

