#pragma once
#include "CoreMinimal.h"
#include "SeasonLevelWidget.h"
#include "SeasonInfinityLevelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USeasonInfinityLevelWidget : public USeasonLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfinityStartLevel;
    
public:
    USeasonInfinityLevelWidget();
};

