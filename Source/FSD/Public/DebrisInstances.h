#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "DebrisInstances.generated.h"

class UDebrisBase;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDebrisInstances : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDebrisBase* DebrisBase;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 DebrisIndex;
    
public:
    UDebrisInstances();
};

