#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "ObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class UObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
public:
    UObjectAttackerPositioning();
};

