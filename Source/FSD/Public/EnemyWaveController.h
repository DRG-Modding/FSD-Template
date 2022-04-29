#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnemyWaveController.generated.h"

UCLASS(Blueprintable)
class UEnemyWaveController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuitableForSolo;
    
public:
    UEnemyWaveController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaveCompleted();
    
};

