#pragma once
#include "CoreMinimal.h"
#include "FSDTranslationProgress.generated.h"

USTRUCT(BlueprintType)
struct FFSDTranslationProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslatedPercent;
    
    FSD_API FFSDTranslationProgress();
};

