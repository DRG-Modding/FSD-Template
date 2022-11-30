#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathfinderCharacter.h"
#include "UObject/NoExportTypes.h"
#include "CaveWorm.generated.h"

class USimpleHealthComponent;
class UHealthComponentBase;
class AResourceChunk;
class UObject;
class UResourceData;

UCLASS(Blueprintable, MinimalAPI)
class ACaveWorm : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchChunksRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchChunksInterval;
    
public:
    ACaveWorm();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Search();
    
    UFUNCTION(BlueprintCallable)
    void IncrementKillCount(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
    
};

