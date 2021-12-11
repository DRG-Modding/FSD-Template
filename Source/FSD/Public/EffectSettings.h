#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EffectSettings.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class UEffectSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UNiagaraSystem>> ParticlesForShaderGeneration;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShadeGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void MarkShadersGenerated();
    
    UFUNCTION(BlueprintCallable)
    void CompileShaders();
    
    UEffectSettings();
};

