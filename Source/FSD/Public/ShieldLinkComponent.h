#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "ShieldLinkComponent.generated.h"

class APlayerCharacter;
class UStatusEffect;

UCLASS()
class UShieldLinkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> BoostedStatusEffect;
    
    UPROPERTY(Transient)
    UStatusEffect* BoostedStatusEffectInstance;
    
    UPROPERTY(EditAnywhere)
    float LinkDistance;
    
    UPROPERTY(Transient)
    TSet<APlayerCharacter*> LinkedCharacters;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> LinkStatusEffect;
    
    UFUNCTION(BlueprintCallable)
    void TimerFunction();
    
public:
    UShieldLinkComponent();
};

