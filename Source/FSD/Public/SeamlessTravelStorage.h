#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SeamlessTravelStorage.generated.h"

class UDifficultySetting;
class USeamlessTravelEventKey;
class UPlayer;
class UResourceData;

UCLASS(BlueprintType)
class USeamlessTravelStorage : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* ChosenDifficulty;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayer*, bool> PlayerShouldStartInMedbay;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> Resources;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float MissionTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> StoredFloatValues;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StoredIntValues;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<USeamlessTravelEventKey*> EventKeys;
    
    USeamlessTravelStorage();
    UFUNCTION(BlueprintCallable)
    void ClearGameStateSeamlessTravelStorage();
    
};

