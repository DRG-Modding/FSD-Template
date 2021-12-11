#pragma once
#include "CoreMinimal.h"
#include "CharacterProgress.generated.h"

class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FCharacterProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NextLevelXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TimesRetired;
    
    FSD_API FCharacterProgress();
};

