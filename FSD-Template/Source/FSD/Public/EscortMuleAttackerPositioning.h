#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS()
class UEscortMuleAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UHealthComponentBase* Health;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> AttackerPositions;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNewMaxAttackers(int32 newMaxAttackers);
    
    UFUNCTION(BlueprintCallable)
    void SetCostModifier(float newModifier);
    
    UEscortMuleAttackerPositioning();
};

