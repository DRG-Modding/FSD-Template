#pragma once
#include "CoreMinimal.h"
#include "LocalizedLanguageInfo.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedLanguageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString EnglishName;
    
    UPROPERTY(BlueprintReadOnly)
    FString NativeName;
    
    UPROPERTY(BlueprintReadOnly)
    FString CodeName;
    
    UPROPERTY(BlueprintReadOnly)
    bool CommunityTranslated;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TranslatedPercent;
    
    FSD_API FLocalizedLanguageInfo();
};

