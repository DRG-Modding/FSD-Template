#pragma once
#include "CoreMinimal.h"
#include "EFriendOnlineStatusEnum.h"
#include "BlueprintFriend.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RealName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFriendOnlineStatusEnum OnlineStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UniqueNetId;
    
    FSD_API FBlueprintFriend();
};

