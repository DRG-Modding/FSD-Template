#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerAI.generated.h"

UINTERFACE(Blueprintable)
class UTriggerAI : public UInterface {
    GENERATED_BODY()
};

class ITriggerAI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnTriggerAI(FName TriggerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMessageAI(FName TriggerName);
    
};

