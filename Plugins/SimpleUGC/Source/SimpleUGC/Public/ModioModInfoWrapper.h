#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "ModioModInfoWrapper.generated.h"

UCLASS(Blueprintable)
class SIMPLEUGC_API UModioModInfoWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModAuthor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCApprovalStatus Status;
    
    UModioModInfoWrapper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModIdInvalid();
    
};

