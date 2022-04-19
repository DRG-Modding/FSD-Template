#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CharacterVanitySave.h"
#include "ItemLoadout.h"
#include "VictoryPoseSave.h"
#include "CharacterSave.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FCharacterSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasCompletedRetirementCampaign;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TimesRetired;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 RetiredCharacterLevels;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasSeenRetirementRewardScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterVanitySave Vanity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SelectedLoadout;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadout> Loadouts;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVictoryPoseSave VictoryPose;
    
public:
    FSD_API FCharacterSave();
};

