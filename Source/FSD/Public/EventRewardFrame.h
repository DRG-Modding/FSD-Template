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
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEventUsableComponent* EventUsable;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEventRewardDispenser*> Dispensers;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool keyInserted;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> EventPlayerIDs;
    
public:
    AEventRewardFrame();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

