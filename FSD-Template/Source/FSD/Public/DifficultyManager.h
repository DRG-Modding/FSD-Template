#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultyManager.generated.h"

class AFSDGameMode;
class AFSDGameState;
class UDifficultySetting;

UCLASS(BlueprintType)
class UDifficultyManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinModifierEnemyCount;
    
    UPROPERTY(EditAnywhere)
    float MinModifierAttackCooldown;
    
    UPROPERTY(EditAnywhere)
    float MinModifierSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ForcedPlayerCount;
    
    UPROPERTY(Transient)
    AFSDGameMode* GameMode;
    
    UPROPERTY(Transient)
    AFSDGameState* GameState;
    
public:
    UFUNCTION(BlueprintCallable)
    UDifficultySetting* SelectDifficulty(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmallEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPointExtractionScaler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExtraLargeEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyCountModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetCurrentDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossDifficultyScaler() const;
    
    UDifficultyManager();
};

