#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "StaticObjectAfflictionComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStaticObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    UStaticObjectAfflictionComponent();
};

