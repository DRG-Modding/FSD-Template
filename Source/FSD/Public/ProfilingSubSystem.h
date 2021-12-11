#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ProfileEntry.h"
#include "ProfileCategoryTiming.h"
#include "ProfilingSubSystem.generated.h"

UCLASS(BlueprintType)
class UProfilingSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FProfileEntry> Entries;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileEntry> GetEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileCategoryTiming> GetCategoryTimings() const;
    
    UProfilingSubSystem();
};

