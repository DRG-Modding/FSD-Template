#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "UsedBySignatureDelegate.h"
#include "ContinuousUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UContinuousUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsedBySignature UseTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Usable;
    
public:
    UContinuousUsableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanUse(bool CanUse);
    
};

