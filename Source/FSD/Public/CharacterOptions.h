#pragma once
#include "CoreMinimal.h"
#include "CharacterOptions.generated.h"

USTRUCT(BlueprintType)
struct FCharacterOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool GrapplingHookAutoSwitch;
    
    UPROPERTY(BlueprintReadWrite)
    bool ZiplineGunAutoSwitch;
    
    FSD_API FCharacterOptions();
};

