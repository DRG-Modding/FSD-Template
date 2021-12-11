#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TrackedStatInfo.h"
#include "UObject/NoExportTypes.h"
#include "SavableDataAsset.h"
#include "ChallengeVariation.h"
#include "SeasonChallenge.generated.h"

class UTexture2D;
class UCampaign;
class USeasonChallenge;

UCLASS()
class USeasonChallenge : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ChallengeText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconOutlined;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    TArray<FTrackedStatInfo> TrackedStats;
    
    UPROPERTY(EditAnywhere)
    TArray<FChallengeVariation> Variations;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfChoices;
    
    UPROPERTY(EditAnywhere)
    float ChallengeWeight;
    
    UPROPERTY(EditAnywhere)
    bool bIsSpecialChallenge;
    
    UPROPERTY(EditAnywhere)
    int32 MaxOccurences;
    
    UPROPERTY(EditAnywhere)
    USeasonChallenge* ChallengeAfterMaxOccurences;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> RequiredCampaigns;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconOutlined();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon();
    
    USeasonChallenge();
};

