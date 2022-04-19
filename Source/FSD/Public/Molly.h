#pragma once
#include "CoreMinimal.h"
#include "MULE.h"
#include "DelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Molly.generated.h"

class UDialogDataAsset;
class UResourceBank;
class APlayerCharacter;
class UOutlineComponent;

UCLASS(Abstract)
class FSD_API AMolly : public AMULE {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCalledByDelegate, APlayerCharacter*, InPlayer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCalledByDelegate OnCalledByChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate OnReachedDropShip;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_CalledBy, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> CalledBy;
    
public:
    AMolly();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOpenForDeposit(bool Open);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void SetGotoDropShip(const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCalledBy(APlayerCharacter* InPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CalledBy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDialogDataAsset* GetCallingShout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableButton();
    
};

