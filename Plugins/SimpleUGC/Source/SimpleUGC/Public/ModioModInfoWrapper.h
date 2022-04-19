#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "ModioModInfoWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioModInfoWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModURL;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModAuthor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModDescription;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUGCApprovalStatus Status;
    
    UModioModInfoWrapper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModIdInvalid();
    
};

