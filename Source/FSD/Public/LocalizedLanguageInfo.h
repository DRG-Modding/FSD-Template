#pragma once
#include "CoreMinimal.h"
#include "LocalizedLanguageInfo.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedLanguageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString EnglishName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString NativeName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString CodeName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool CommunityTranslated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TranslatedPercent;
    
    FSD_API FLocalizedLanguageInfo();
};

