#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "NiagaraComponent.h"
#include "FirstPersonNiagaraComponent.generated.h"

class UNiagaraSystem;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UFirstPersonNiagaraComponent();
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
    
};

