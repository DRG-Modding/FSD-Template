#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FirstPersonParticleSystemComponent.generated.h"

class UParticleSystem;
class USceneComponent;

UCLASS(EditInlineNew)
class UFirstPersonParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
    
    UFirstPersonParticleSystemComponent();
};

