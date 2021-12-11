#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "LoginBlueprintCallProxy.generated.h"

class UObject;
class ULoginBlueprintCallProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoginBlueprintCallProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoginBlueprintCallProxyOnFailure);

UCLASS()
class ULoginBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLoginBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FLoginBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static ULoginBlueprintCallProxy* Login(UObject* NewWorldContextObject);
    
    ULoginBlueprintCallProxy();
};

