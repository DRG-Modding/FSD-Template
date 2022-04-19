#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameStats.generated.h"

class USeamlessTravelEventKey;
class UCappedResource;

UCLASS()
class AGameStats : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayersEscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalEnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MissionHaz;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<USeamlessTravelEventKey*> EventKeys;
    
    AGameStats();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
    
};

