#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FSDLookupSessionId.generated.h"

class UFSDLookupSessionId;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDLookupSessionIdOnSuccess, FBlueprintSessionResult, Result);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDLookupSessionIdOnFailure);

UCLASS(MinimalAPI)
class UFSDLookupSessionId : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FFSDLookupSessionIdOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDLookupSessionIdOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, const FString& SessionKey);
    
public:
    UFSDLookupSessionId();
};

