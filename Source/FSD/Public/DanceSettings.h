#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DanceItem.h"
#include "DanceSettings.generated.h"

UCLASS(BlueprintType)
class UDanceSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDanceItem> DanceMoves;
    
    UDanceSettings();
};

