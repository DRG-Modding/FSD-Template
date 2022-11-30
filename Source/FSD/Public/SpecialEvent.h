#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialEvent.generated.h"

class UMissionTemplate;
class USpecialEventSpawner;

UCLASS(Blueprintable)
class FSD_API USpecialEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionTemplate*> BannedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpecialEventSpawner* EventSpawner;
    
    USpecialEvent();
};

