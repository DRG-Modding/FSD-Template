#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FoundSessionResultDelegate.h"
#include "FSDLookupSessionId.generated.h"

class UFSDLookupSessionId;
class UObject;

UCLASS(MinimalAPI)
class UFSDLookupSessionId : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFoundSessionResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
public:
    UFSDLookupSessionId();
private:
    UFUNCTION(BlueprintCallable)
    static UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, const FString& SessionKey);
    
};

