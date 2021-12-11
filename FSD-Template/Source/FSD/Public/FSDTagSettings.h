#pragma once
#include "CoreMinimal.h"
#include "FSDTagsRoot.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FSDTagSettings.generated.h"

UCLASS()
class UFSDTagSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsFriendlyQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsNeutralQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsHostileQuery;
    
    UPROPERTY(EditAnywhere)
    FFSDTagsRoot Root;
    
    UFSDTagSettings();
};

