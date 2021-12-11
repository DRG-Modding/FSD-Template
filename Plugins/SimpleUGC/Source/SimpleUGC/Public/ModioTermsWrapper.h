#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioTermsWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioTermsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString AgreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisagreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsLink;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsText;
    
    UPROPERTY(BlueprintReadOnly)
    FString PrivacyLink;
    
    UPROPERTY(BlueprintReadOnly)
    FString PrivacyText;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsOfUseText;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEmpty();
    
    UModioTermsWrapper();
};

