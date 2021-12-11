#pragma once
#include "CoreMinimal.h"
#include "OptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool SaveGameOptionsValid;
    
    UPROPERTY()
    int32 ScreenMode;
    
    FSD_API FOptionsInSaveGame();
};

