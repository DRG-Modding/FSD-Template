#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "ObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS()
class UObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UHealthComponentBase* Health;
    
public:
    UObjectAttackerPositioning();
};

