#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotifyMessageReceiver.generated.h"

UINTERFACE(Blueprintable)
class UNotifyMessageReceiver : public UInterface {
    GENERATED_BODY()
};

class INotifyMessageReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnNotifyMessageReceived(FName TriggerName);
    
};

