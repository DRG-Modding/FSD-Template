#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "FirstPersonParticleSystemComponent.generated.h"

class USceneComponent;
class UParticleSystem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UFirstPersonParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
    
};

