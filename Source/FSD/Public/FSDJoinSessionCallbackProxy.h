#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FSDJoinSessionCallbackProxy.generated.h"

class UObject;
class APlayerController;
class UFSDJoinSessionCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UFSDJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UFSDJoinSessionCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFSDJoinSessionCallbackProxy* FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite);
    
};

