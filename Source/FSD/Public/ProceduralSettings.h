#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProceduralSettings.generated.h"

class URoomDecorationObject;

UCLASS()
class UProceduralSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomDecorationObject* MiningpodCalldownLocationDecoration;
    
    UProceduralSettings();
};

