#pragma once
#include "CoreMinimal.h"
#include "CharacterViewInfo.h"
#include "CharacterViewScene.generated.h"

USTRUCT(BlueprintType)
struct FCharacterViewScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterViewInfo> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MissionSuccess;
    
    FSD_API FCharacterViewScene();
};

