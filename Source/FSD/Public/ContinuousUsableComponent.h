#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "EInputKeys.h"
#include "ContinuousUsableComponent.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FContinuousUsableComponentUseTick, APlayerCharacter*, User, EInputKeys, Key);

UCLASS()
class UContinuousUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FContinuousUsableComponentUseTick UseTick;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenTicks;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    bool Usable;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanUse(bool CanUse);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UContinuousUsableComponent();
};

