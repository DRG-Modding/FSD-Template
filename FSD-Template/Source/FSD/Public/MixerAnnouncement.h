#pragma once
#include "CoreMinimal.h"
#include "MixerAnnouncement.generated.h"

USTRUCT(BlueprintType)
struct FMixerAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    FSD_API FMixerAnnouncement();
};

