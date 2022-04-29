#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "MissionDNA.generated.h"

class UMissionComplexity;
class UMissionDuration;

UCLASS(Abstract, Blueprintable)
class UMissionDNA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MissionScale;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDuration* Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagQuery> RoomQueries;
    
public:
    UMissionDNA();
    UFUNCTION(BlueprintPure)
    float GetDurationHazardBonus() const;
    
    UFUNCTION(BlueprintPure)
    float GetComplexityHazardBonus() const;
    
};

