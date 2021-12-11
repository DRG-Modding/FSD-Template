#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemySkinAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS()
class UEnemySkinAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> NewMaterials;
    
public:
    UEnemySkinAfflictionEffect();
};

