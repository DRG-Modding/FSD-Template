#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivitySubSystem.generated.h"

class APlayerState;
class UGameActivityType;

UCLASS(Blueprintable)
class UActivitySubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UActivitySubSystem();
    UFUNCTION(BlueprintCallable)
    void StartActivity(const APlayerState* PlayerState, const UGameActivityType* Activity);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerReviewUI(bool ReviewActiveMatch);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerReviewUIAvailable(bool ReviewActiveMatch);
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(const APlayerState* PlayerState, const UGameActivityType* Activity);
    
};

