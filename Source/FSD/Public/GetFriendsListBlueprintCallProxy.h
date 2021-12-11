#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintFriend.h"
#include "GetFriendsListBlueprintCallProxy.generated.h"

class UGetFriendsListBlueprintCallProxy;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetFriendsListBlueprintCallProxyOnSuccess, const TArray<FBlueprintFriend>&, Results);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetFriendsListBlueprintCallProxyOnFailure, const TArray<FBlueprintFriend>&, Results);

UCLASS()
class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFriendsListBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGetFriendsListBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* NewWorldContextObject, const FString& ListName);
    
    UGetFriendsListBlueprintCallProxy();
};

