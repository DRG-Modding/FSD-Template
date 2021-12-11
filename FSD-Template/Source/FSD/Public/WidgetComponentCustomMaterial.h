#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "WidgetComponentCustomMaterial.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UWidgetComponentCustomMaterial : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* CustomMaterial;
    
public:
    UWidgetComponentCustomMaterial();
};

