#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaveObject.generated.h"

UCLASS(Abstract)
class ACaveObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool CanCharacterStandOn;
    
    UFUNCTION(BlueprintCallable)
    void TriggerNetworkUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ResumeNetworkUpdates();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_OnGameStarted();
    
    UFUNCTION(BlueprintCallable)
    void PauseNetworkUpdates();
    
public:
    ACaveObject();
};

