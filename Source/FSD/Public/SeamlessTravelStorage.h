#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SeamlessTravelStorage.generated.h"

class USeamlessTravelEventKey;
class UDifficultySetting;
class UResourceData;
class UPlayer;

UCLASS(Blueprintable)
class USeamlessTravelStorage : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* ChosenDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayer*, bool> PlayerShouldStartInMedbay;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<UResourceData*, float> Resources;
    
    UPROPERTY(EditAnywhere, Transient)
    float MissionTime;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<FName, float> StoredFloatValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StoredIntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<USeamlessTravelEventKey*> EventKeys;
    
    USeamlessTravelStorage();
    UFUNCTION(BlueprintCallable)
    void ClearGameStateSeamlessTravelStorage();
    
};

