#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerProgress.h"
#include "CharacterProgress.h"
#include "MissionPlayerAndCharacterWidget.generated.h"

UCLASS(EditInlineNew)
class UMissionPlayerAndCharacterWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateValues(int32 PlayerRank, int32 PlayerStars, int32 CharacterLevel, float CharacterProgress);
    
    UFUNCTION(BlueprintCallable)
    void StepCounter(float TimeScale, bool& CounterFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PingPlayerRank();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PingCharacterLevel(int32 Level, int32 Stars);
    
    UFUNCTION(BlueprintCallable)
    void InitCounter(FPlayerProgress PlayerProgressStart, FCharacterProgress CharacterProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressFinish);
    
public:
    UMissionPlayerAndCharacterWidget();
};

