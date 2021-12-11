#pragma once
#include "CoreMinimal.h"
#include "UsableComponentBase.h"
#include "ResourceBank.generated.h"

class APlayerCharacter;
class AFSDGameState;
class USoundBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourceBankOnEndDeposite, APlayerCharacter*, User);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourceBankOnBeginDeposite, APlayerCharacter*, User);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourceBankOnDepositing, APlayerCharacter*, User);

UCLASS()
class UResourceBank : public UUsableComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResourceBankOnBeginDeposite OnBeginDeposite;
    
    UPROPERTY(BlueprintAssignable)
    FResourceBankOnDepositing OnDepositing;
    
    UPROPERTY(BlueprintAssignable)
    FResourceBankOnEndDeposite OnEndDeposite;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool OpenForDeposit;
    
protected:
    UPROPERTY(Transient)
    AFSDGameState* GameState;
    
    UPROPERTY(EditAnywhere)
    float DepositesPerSecond;
    
    UPROPERTY(EditAnywhere)
    float DepositeAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanGetStrict;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AddToTeamInventory;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioBeginDepositing;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioDepositing;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioEndDepositing;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Depositing(APlayerCharacter* Character);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UResourceBank();
};

