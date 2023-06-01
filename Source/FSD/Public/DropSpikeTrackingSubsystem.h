#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DropSpikeTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class UDropSpikeTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDropSpikeTrackingSubsystem();
    UFUNCTION(BlueprintCallable)
    void IncrementSpikeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpikeCount() const;
    
};

