#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "MissionDuration.generated.h"

UCLASS(BlueprintType)
class UMissionDuration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfDots;
    
    UPROPERTY()
    FGuid SaveGameID;
    
    UMissionDuration();
};

