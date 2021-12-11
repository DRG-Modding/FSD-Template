#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SeasonSettings.generated.h"

class USeason;
class USeasonChallenge;
class UCurveFloat;

UCLASS(BlueprintType)
class USeasonSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USeason* CurrentSeason;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxActiveChallenges;
    
    UPROPERTY(EditAnywhere)
    TArray<USeasonChallenge*> SeasonChallenges;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 XPPerLevel;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* XPToPerforcemancePointsCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TreeOfVanitySnapSize;
    
    UPROPERTY(EditAnywhere)
    float SpecialChallengeChange;
    
    USeasonSettings();
};

