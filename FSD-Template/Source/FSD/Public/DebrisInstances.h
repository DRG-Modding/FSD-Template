#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "DebrisInstances.generated.h"

class UDebrisBase;

UCLASS(EditInlineNew)
class UDebrisInstances : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UDebrisBase* DebrisBase;
    
private:
    UPROPERTY(Transient)
    int32 DebrisIndex;
    
public:
    UDebrisInstances();
};

