#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventRewardFrame.generated.h"

class USpecialEventUsableComponent;
class AEventRewardDispenser;

UCLASS()
class AEventRewardFrame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpecialEventUsableComponent* EventUsable;
    
protected:
    UPROPERTY(Transient)
    TArray<AEventRewardDispenser*> Dispensers;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool keyInserted;
    
    UPROPERTY(Replicated, Transient)
    TArray<FString> EventPlayerIDs;
    
public:
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyInserted(bool NewKeyInserted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDispenseRewards(bool dispensRewards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDispenser(AEventRewardDispenser* Dispenser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDispensRewards() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventRewardFrame();
};

