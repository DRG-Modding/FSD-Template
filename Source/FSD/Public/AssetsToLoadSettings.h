#pragma once
#include "CoreMinimal.h"
#include "AssetsToLoadSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAssetsToLoadSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ActorsPermanently;
    
    FSD_API FAssetsToLoadSettings();
};

