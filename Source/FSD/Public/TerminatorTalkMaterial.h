#pragma once
#include "CoreMinimal.h"
#include "TerminatorTalkMaterial.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FTerminatorTalkMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    UPROPERTY(EditAnywhere)
    float BasePower;
    
    UPROPERTY(EditAnywhere)
    float AmplitudeMultiplier;
    
    FSD_API FTerminatorTalkMaterial();
};

