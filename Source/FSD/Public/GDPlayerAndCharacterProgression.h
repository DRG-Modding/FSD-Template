#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GDPlayerAndCharacterProgression.generated.h"

class APlayerCharacter;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGDPlayerAndCharacterProgression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<APlayerCharacter>> TestHeroClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> PlayerRankNames;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CharacterXPLevels;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDs;
    
    FSD_API FGDPlayerAndCharacterProgression();
};

