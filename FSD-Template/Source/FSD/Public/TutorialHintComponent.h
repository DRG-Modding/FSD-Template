#pragma once
#include "CoreMinimal.h"
#include "TutorialComponent.h"
#include "TutorialHint.h"
#include "TutorialHintComponent.generated.h"

class UObject;

UCLASS(Abstract)
class UTutorialHintComponent : public UTutorialComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FTutorialHint Hint;
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingVisibleTime(float remainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingleplayer(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeHint(const FTutorialHint& NewHint);
    
public:
    UTutorialHintComponent();
};

