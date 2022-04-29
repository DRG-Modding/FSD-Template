#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "FirstPersonStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnabledFPFOV;
    
public:
    UFirstPersonStaticMeshComponent();
};

