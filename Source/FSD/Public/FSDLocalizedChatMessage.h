#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.h"
#include "FSDLocalizedChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FFSDLocalizedChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatMessageType MsgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Arguments;
    
    FSD_API FFSDLocalizedChatMessage();
};

