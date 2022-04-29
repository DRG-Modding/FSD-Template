#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetLoader.generated.h"

UCLASS(Blueprintable)
class FSD_API UAssetLoader : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAssetLoader();
};

