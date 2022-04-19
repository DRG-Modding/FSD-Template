#pragma once
#include "CoreMinimal.h"
#include "WeakpointChannel.generated.h"

class UFSDPhysicalMaterial;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FWeakpointChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    FSD_API FWeakpointChannel();
};

