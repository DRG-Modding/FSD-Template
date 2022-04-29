#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NewsTextHeadlines.generated.h"

UCLASS(Blueprintable)
class UNewsTextHeadlines : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MineralTradeTicker;
    
    UNewsTextHeadlines();
};

