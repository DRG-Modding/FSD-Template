#pragma once
#include "CoreMinimal.h"
#include "ResourceSpawner.h"
#include "Engine/DataAsset.h"
#include "GlobalMissionParameters.generated.h"

UCLASS(Blueprintable)
class UGlobalMissionParameters : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceSpawner> DefaultResources;
    
public:
    UGlobalMissionParameters();
};

