#pragma once
#include "CoreMinimal.h"
#include "WeakpointChannel.generated.h"

class UFSDPhysicalMaterial;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FWeakpointChannel {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(Transient)
    FName Bone;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* Mid;
    
    FSD_API FWeakpointChannel();
};

