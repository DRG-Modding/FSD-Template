#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MineralTradeData.generated.h"

UCLASS(Blueprintable)
class UMineralTradeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MineralTradeTickerTexts;
    
    UMineralTradeData();
};

