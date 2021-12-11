#pragma once
#include "CoreMinimal.h"
#include "CharacterViewInfo.h"
#include "CharacterViewScene.generated.h"

USTRUCT(BlueprintType)
struct FCharacterViewScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCharacterViewInfo> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MissionSuccess;
    
    FSD_API FCharacterViewScene();
};

