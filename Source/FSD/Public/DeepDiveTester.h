#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeepDiveTesterItem.h"
#include "EMissionStructure.h"
#include "DeepDiveTester.generated.h"

class UBiome;

UCLASS(Blueprintable)
class ADeepDiveTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStructure MissionStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveTesterItem> Stages;
    
public:
    ADeepDiveTester();
};

