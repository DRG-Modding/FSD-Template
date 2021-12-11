#pragma once
#include "CoreMinimal.h"
#include "EChatSenderType.h"
#include "EChatMessageType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FSDChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FFSDChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EChatMessageType MsgType;
    
    UPROPERTY(BlueprintReadOnly)
    FString Sender;
    
    UPROPERTY(BlueprintReadOnly)
    EChatSenderType SenderType;
    
    UPROPERTY(BlueprintReadWrite)
    FString Msg;
    
    UPROPERTY(BlueprintReadOnly)
    FUniqueNetIdRepl SenderNetID;
    
    FSD_API FFSDChatMessage();
};

