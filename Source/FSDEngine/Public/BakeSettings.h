#pragma once
#include "CoreMinimal.h"
#include "BakeSetting.h"
#include "BakeSettings.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FBakeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakeSetting> Pairs;
    
    FBakeSettings();
};

