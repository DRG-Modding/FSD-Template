#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventParticipant.generated.h"

class AGameEvent;

UINTERFACE(Blueprintable)
class UEventParticipant : public UInterface {
    GENERATED_BODY()
};

class IEventParticipant : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupEvent(AGameEvent* GameEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventFinished(bool eventSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AdvanceOneObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddEventProgress(float Progress);
    
};

