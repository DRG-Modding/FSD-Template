#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameStats.generated.h"

class UCappedResource;

UCLASS()
class AGameStats : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 NumberOfPlayersEscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalEnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 MissionHaz;
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGameStats();
};

