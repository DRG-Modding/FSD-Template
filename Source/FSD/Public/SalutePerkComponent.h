#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "SalutePerkComponent.generated.h"

UCLASS()
class USalutePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere)
    float FleeRadius;
    
    UFUNCTION(BlueprintCallable)
    void OnSalute();
    
public:
    USalutePerkComponent();
};

