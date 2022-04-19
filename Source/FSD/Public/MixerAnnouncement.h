#pragma once
#include "CoreMinimal.h"
#include "MixerAnnouncement.generated.h"

USTRUCT(BlueprintType)
struct FMixerAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FSD_API FMixerAnnouncement();
};

