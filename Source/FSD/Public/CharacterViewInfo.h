#pragma once
#include "CoreMinimal.h"
#include "EquippedVanity.h"
#include "Templates/SubclassOf.h"
#include "CharacterViewInfo.generated.h"

class APlayerCharacter;
class UVictoryPose;

USTRUCT(BlueprintType)
struct FCharacterViewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippedVanity EquippedVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SurvivedInPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;
    
    FSD_API FCharacterViewInfo();
};

