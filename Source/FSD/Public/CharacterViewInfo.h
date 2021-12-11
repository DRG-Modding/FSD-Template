#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterViewInfo.generated.h"

class UVictoryPose;
class APlayerCharacter;
class UVanityItem;

USTRUCT(BlueprintType)
struct FCharacterViewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APlayerCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UVanityItem*> EquippedVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SurvivedInPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVictoryPose* VictoryPose;
    
    FSD_API FCharacterViewInfo();
};

