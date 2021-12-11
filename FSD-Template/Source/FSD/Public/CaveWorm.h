#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathfinderCharacter.h"
#include "UObject/NoExportTypes.h"
#include "CaveWorm.generated.h"

class UHealthComponentBase;
class USimpleHealthComponent;
class AResourceChunk;
class UObject;
class UResourceData;

UCLASS(MinimalAPI)
class ACaveWorm : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchChunksRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchChunksInterval;
    
public:
    UFUNCTION(BlueprintCallable)
    static AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Search();
    
    UFUNCTION(BlueprintCallable)
    void IncrementKillCount(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
    
    ACaveWorm();
};

