#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioTermsWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioTermsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AgreeButtonText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString DisagreeButtonText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TermsLink;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TermsText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PrivacyLink;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PrivacyText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TermsOfUseText;
    
    UModioTermsWrapper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEmpty();
    
};

