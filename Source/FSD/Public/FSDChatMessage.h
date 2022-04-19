#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.h"
#include "EChatSenderType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FSDChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FFSDChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EChatMessageType MsgType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Sender;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EChatSenderType SenderType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl SenderNetID;
    
    FSD_API FFSDChatMessage();
};

