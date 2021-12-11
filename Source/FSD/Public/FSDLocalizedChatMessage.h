#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.h"
#include "FSDLocalizedChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FFSDLocalizedChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EChatMessageType MsgType;
    
    UPROPERTY(BlueprintReadOnly)
    FString Sender;
    
    UPROPERTY(BlueprintReadOnly)
    FText Msg;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FText> Arguments;
    
    FSD_API FFSDLocalizedChatMessage();
};

