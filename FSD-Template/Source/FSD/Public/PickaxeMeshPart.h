#pragma once
#include "CoreMinimal.h"
#include "PickaxePartItem.h"
#include "PickaxeMeshPart.generated.h"

class UStaticMesh;

UCLASS(Abstract, EditInlineNew)
class UPickaxeMeshPart : public UPickaxePartItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
public:
    UPickaxeMeshPart();
};

