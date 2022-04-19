#pragma once
#include "CoreMinimal.h"
#include "EFriendOnlineStatusEnum.h"
#include "BlueprintFriend.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RealName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendOnlineStatusEnum OnlineStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueNetId;
    
    FSD_API FBlueprintFriend();
};

