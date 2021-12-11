#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "MissionDNA.generated.h"

class UMissionComplexity;
class UMissionDuration;

UCLASS(Abstract, BlueprintType)
class UMissionDNA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MissionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionDuration* Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTagQuery> RoomQueries;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationHazardBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetComplexityHazardBonus() const;
    
    UMissionDNA();
};

