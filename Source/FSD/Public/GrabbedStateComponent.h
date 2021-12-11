#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "GrabbedStateComponent.generated.h"

class UGrabberComponent;

UCLASS(MinimalAPI)
class UGrabbedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Grabber)
    TWeakObjectPtr<UGrabberComponent> CurrentGrabber;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Grabber();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGrabbedStateComponent();
};

