#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FSDChatMessage.h"
#include "MessagingSubSystem.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessagingSubSystemOnNewMessage, const FFSDChatMessage&, Message);

UCLASS(BlueprintType)
class UMessagingSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMessagingSubSystemOnNewMessage OnNewMessage;
    
    UFUNCTION(BlueprintCallable)
    static float MessageAge(const FFSDChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable)
    void LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages);
    
    UFUNCTION(BlueprintCallable)
    void ClearMessages();
    
    UMessagingSubSystem();
};

