#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "UObject/NoExportTypes.h"
#include "CustomObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS()
class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UHealthComponentBase* Health;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> AttackerPositions;
    
public:
    UCustomObjectAttackerPositioning();
};

