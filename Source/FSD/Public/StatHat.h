#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StatHat.generated.h"

UCLASS(Blueprintable)
class UStatHat : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStatHat();
    UFUNCTION(BlueprintCallable)
    void AddStatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStatCount(const FString& Key, int32 count);
    
};

