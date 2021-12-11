#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GDAudio.generated.h"

class USoundAttenuation;
class AFSDReverbVolume;
class UDynamicReverbComponent;

USTRUCT(BlueprintType)
struct FGDAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundAttenuation> FirstPersonHitscanAttenuationOverride;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AFSDReverbVolume> ReverbActor;
    
    UPROPERTY(EditAnywhere)
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

