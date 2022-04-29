#pragma once
#include "CoreMinimal.h"
#include "MissionDNA.h"
#include "EscortMissionDNA.generated.h"

UCLASS(Blueprintable)
class UEscortMissionDNA : public UMissionDNA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefuelLocations;
    
    UEscortMissionDNA();
};

