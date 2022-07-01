#pragma once
#include "CoreMinimal.h"
#include "MULE.h"
#include "DelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Molly.generated.h"

class APlayerCharacter;
class UResourceBank;
class UOutlineComponent;
class UDialogDataAsset;

UCLASS(Abstract, Blueprintable)
class FSD_API AMolly : public AMULE {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCalledByDelegate, APlayerCharacter*, InPlayer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalledByDelegate OnCalledByChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnReachedDropShip;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CalledBy)
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

