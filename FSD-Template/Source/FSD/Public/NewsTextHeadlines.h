#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NewsTextHeadlines.generated.h"

UCLASS(BlueprintType)
class UNewsTextHeadlines : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> MineralTradeTicker;
    
    UNewsTextHeadlines();
};

