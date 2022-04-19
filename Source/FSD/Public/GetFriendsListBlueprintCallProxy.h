#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "GetFriendsListBlueprintCallProxy.generated.h"

class UGetFriendsListBlueprintCallProxy;
class UObject;

UCLASS()
class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UGetFriendsListBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* NewWorldContextObject, const FString& ListName);
    
};

