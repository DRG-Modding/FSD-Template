#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "ModioModInfoWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioModInfoWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ModId;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModAuthor;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModVersion;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModDescription;
    
    UPROPERTY(BlueprintReadOnly)
    EUGCApprovalStatus Status;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModIdInvalid();
    
    UModioModInfoWrapper();
};

