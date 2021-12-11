#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "AttachMeshesAfflictionItem.h"
#include "AttachMeshesAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS()
class UAttachMeshesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FAttachMeshesAfflictionItem> AttachItems;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* OnRemoveEffect;
    
public:
    UAttachMeshesAfflictionEffect();
};

