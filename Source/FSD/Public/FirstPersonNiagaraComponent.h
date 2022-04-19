#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "NiagaraComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FirstPersonNiagaraComponent.generated.h"

class USceneComponent;
class UNiagaraSystem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UFirstPersonNiagaraComponent();
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
    
};

