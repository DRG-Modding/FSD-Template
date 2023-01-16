#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackerPositioningComponent.h"
#include "CustomObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AttackerPositions;
    
public:
    UCustomObjectAttackerPositioning();
};

