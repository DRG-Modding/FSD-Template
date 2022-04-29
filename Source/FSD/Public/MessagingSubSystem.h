#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NewMessageSigDelegate.h"
#include "FSDChatMessage.h"
#include "MessagingSubSystem.generated.h"

UCLASS(Blueprintable)
class UMessagingSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewMessageSig OnNewMessage;
    
    UMessagingSubSystem();
    UFUNCTION(BlueprintCallable)
    static float MessageAge(const FFSDChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable)
    void LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages);
    
    UFUNCTION(BlueprintCallable)
    void ClearMessages();
    
};

