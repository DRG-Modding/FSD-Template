#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivitySubSystem.generated.h"

class APlayerState;
class UGameActivityType;

UCLASS(BlueprintType)
class UActivitySubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartActivity(const APlayerState* PlayerState, const UGameActivityType* activity);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerReviewUI(bool ReviewActiveMatch);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerReviewUIAvailable(bool ReviewActiveMatch);
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(const APlayerState* PlayerState, const UGameActivityType* activity);
    
    UActivitySubSystem();
};

