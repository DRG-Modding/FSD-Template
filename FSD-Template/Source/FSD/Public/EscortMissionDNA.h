#pragma once
#include "CoreMinimal.h"
#include "MissionDNA.h"
#include "EscortMissionDNA.generated.h"

UCLASS()
class UEscortMissionDNA : public UMissionDNA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RefuelLocations;
    
    UEscortMissionDNA();
};

