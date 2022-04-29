#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DanceItem.h"
#include "DanceSettings.generated.h"

UCLASS(Blueprintable)
class UDanceSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDanceItem> DanceMoves;
    
    UDanceSettings();
};

