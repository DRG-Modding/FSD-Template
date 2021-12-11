#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "StatusEffectSettings.generated.h"

class UStatusEffect;

UCLASS()
class UStatusEffectSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> frozen;
    
    UStatusEffectSettings();
};

