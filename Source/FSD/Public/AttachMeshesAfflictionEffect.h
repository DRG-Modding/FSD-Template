#pragma once
#include "CoreMinimal.h"
#include "AttachMeshesAfflictionItem.h"
#include "AfflictionEffect.h"
#include "AttachMeshesAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS()
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

