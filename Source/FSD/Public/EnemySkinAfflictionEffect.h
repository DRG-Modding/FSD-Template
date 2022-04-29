#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemySkinAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UEnemySkinAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> NewMaterials;
    
public:
    UEnemySkinAfflictionEffect();
};

