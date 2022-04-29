#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultyManager.generated.h"

class AFSDGameMode;
class AFSDGameState;
class UDifficultySetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
public:
    UDifficultyManager();
    UFUNCTION(BlueprintCallable)
    UDifficultySetting* SelectDifficulty(int32 Index);
    
    UFUNCTION(BlueprintPure)
    float GetSmallEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPointExtractionScaler() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceD() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceC() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceB() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyCountModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetCurrentDifficulty() const;
    
    UFUNCTION(BlueprintPure)
    float GetBossDifficultyScaler() const;
    
};

