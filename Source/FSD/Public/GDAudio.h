#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GDAudio.generated.h"

class USoundAttenuation;
class UDynamicReverbComponent;
class AFSDReverbVolume;

USTRUCT(BlueprintType)
struct FGDAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAttenuation> FirstPersonHitscanAttenuationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFSDReverbVolume> ReverbActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDynamicReverbComponent> DynamicReverbClass;
    
    UPROPERTY(EditAnywhere)
    float SmallCaveRadius;
    
    UPROPERTY(EditAnywhere)
    float MediumCaveRadius;
    
    UPROPERTY(EditAnywhere)
    float LargeCaveRadius;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonPriority;
    
    UPROPERTY(EditAnywhere)
    float ThirdPersonPriority;
    
    FSD_API FGDAudio();
};

