#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EffectSettings.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class UEffectSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> ParticlesForShaderGeneration;
    
    UEffectSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShadeGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void MarkShadersGenerated();
    
    UFUNCTION(BlueprintCallable)
    void CompileShaders();
    
};

