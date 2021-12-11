#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ResourceData.h"
#include "IRandRange.h"
#include "GemResourceData.generated.h"

class UDebrisPositioning;
class UDebrisBase;
class UGemResourceCreator;
class AGem;
class AFSDGameState;

UCLASS()
class UGemResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* DebrisPositioning;
    
    UPROPERTY(EditAnywhere)
    bool CheckIfCompletelyCoveredByTerrain;
    
    UPROPERTY(EditAnywhere)
    FIRandRange GemValue;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGemResourceCreator* ResourceCreator;
    
    UPROPERTY(EditAnywhere)
    float InfluencerRange;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AGem>> GemClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<AGem>> GemClassesLoaded;
    
    UPROPERTY(Transient)
    TArray<UDebrisBase*> DebrisLoaded;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCollectedGemsCreditValue(AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCollectedGemsAmount(AFSDGameState* GameState);
    
    UGemResourceData();
};

