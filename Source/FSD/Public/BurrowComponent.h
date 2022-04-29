#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BurrowComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBurrowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBurrowComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Unburrow(UAnimMontage* customMontage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CallBurrow(bool isBurrowing, UAnimMontage* customMontage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Burrow(UAnimMontage* customMontage);
    
};

