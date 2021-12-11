#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FirstPersonNiagaraComponent.generated.h"

class UNiagaraSystem;
class USceneComponent;

UCLASS(EditInlineNew)
class UFirstPersonNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
    
    UFirstPersonNiagaraComponent();
};

