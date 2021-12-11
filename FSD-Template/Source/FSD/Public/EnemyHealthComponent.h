#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyHealthScaling.h"
#include "EnemyHealthComponent.generated.h"

UCLASS()
class UEnemyHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector KillImpactNormal;
    
    UPROPERTY(EditAnywhere)
    EEnemyHealthScaling EnemyHealthScaling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Courage;
    
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowHealthBar;
    
    UPROPERTY(EditAnywhere)
    FVector HealthBarOffsetWorld;
    
    UPROPERTY(EditAnywhere)
    bool bIsBossFight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BossFightHealthBarSegments;
    
    UPROPERTY(EditAnywhere)
    bool bRegisterEnemy;
    
public:
    /*UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;*/
    
    UEnemyHealthComponent();
};

