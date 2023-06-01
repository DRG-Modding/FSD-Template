#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EmitterConnection.h"
#include "InstancedNiagaraComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInstancedNiagaraComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmitterConnection> Emitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    UInstancedNiagaraComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnParticlesFromName(const FVector Location, const FName EmitterName);
    
    UFUNCTION(BlueprintCallable)
    void SpawnParticles(const FVector Location, const int32 EmitterIndex);
    
};

