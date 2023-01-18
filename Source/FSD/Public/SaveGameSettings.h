#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameSettings.generated.h"

class UVanityItem;

UCLASS(Blueprintable)
class USaveGameSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVanityItem*> CampaignVanityFixupList;
    
public:
    USaveGameSettings();
};

