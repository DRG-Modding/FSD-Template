#pragma once
#include "CoreMinimal.h"
#include "OptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveGameOptionsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenMode;
    
    FSD_API FOptionsInSaveGame();
};

