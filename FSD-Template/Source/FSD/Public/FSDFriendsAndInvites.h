#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlueprintFriend.h"
#include "FSDFriendsAndInvites.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnFriendsChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnFriendInvitesChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnRequestRefresh);

UCLASS(Blueprintable)
class UFSDFriendsAndInvites : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnFriendsChanged OnFriendsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnFriendInvitesChanged OnFriendInvitesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnRequestRefresh OnRequestRefresh;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FBlueprintFriend> Friends;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FBlueprintFriend> FriendInvites;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFSDFriendsAndInvites();
};

