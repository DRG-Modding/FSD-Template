#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.h"
#include "FSDLocalizedChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FFSDLocalizedChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EChatMessageType MsgType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Sender;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Msg;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FText> Arguments;
    
    FSD_API FFSDLocalizedChatMessage();
};

