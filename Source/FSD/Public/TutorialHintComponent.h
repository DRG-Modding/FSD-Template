#pragma once
#include "CoreMinimal.h"
#include "TutorialHint.h"
#include "TutorialComponent.h"
#include "TutorialHintComponent.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTutorialHintComponent : public UTutorialComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialHint Hint;
    
public:
    UTutorialHintComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetRemainingVisibleTime(float remainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingleplayer(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeHint(const FTutorialHint& NewHint);
    
};

