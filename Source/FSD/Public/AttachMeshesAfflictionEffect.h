#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "AttachMeshesAfflictionItem.h"
#include "AttachMeshesAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class UAttachMeshesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachMeshesAfflictionItem> AttachItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnRemoveEffect;
    
public:
    UAttachMeshesAfflictionEffect();
};

