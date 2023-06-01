#pragma once
#include "CoreMinimal.h"
#include "CharacterOptions.generated.h"

USTRUCT(BlueprintType)
struct FCharacterOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrapplingHookAutoSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ZiplineGunAutoSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldToBreakImmobilization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldToFire;
    
    FSD_API FCharacterOptions();
};

