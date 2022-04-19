#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OxygenActiveDelegateDelegate.h"
#include "OxygenSourceComponent.generated.h"

class UNoOxygenMutator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOxygenSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOxygenActiveDelegate OnOxygenActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UNoOxygenMutator* Mutator;
    
public:
    UOxygenSourceComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSourceActivated();
    
};

