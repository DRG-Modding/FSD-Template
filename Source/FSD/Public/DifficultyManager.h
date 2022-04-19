#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultyManager.generated.h"

class AFSDGameState;
class AFSDGameMode;
class UDifficultySetting;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDifficultyManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierSpeed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ForcedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
public:
    UDifficultyManager();
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
    
};

