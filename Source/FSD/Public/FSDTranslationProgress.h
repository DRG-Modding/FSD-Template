#pragma once
#include "CoreMinimal.h"
#include "FSDTranslationProgress.generated.h"

USTRUCT(BlueprintType)
struct FFSDTranslationProgress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CodeName;
    
    UPROPERTY(EditAnywhere)
    int32 TranslatedPercent;
    
    FSD_API FFSDTranslationProgress();
};

