#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "FirstPersonStaticMeshComponent.generated.h"

UCLASS(EditInlineNew)
class UFirstPersonStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnabledFPFOV;
    
public:
    UFirstPersonStaticMeshComponent();
};

