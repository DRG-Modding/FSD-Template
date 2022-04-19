#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "UObject/NoExportTypes.h"
#include "CustomObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AttackerPositions;
    
public:
    UCustomObjectAttackerPositioning();
};

