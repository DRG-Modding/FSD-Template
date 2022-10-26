#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "FSDAssetManager.generated.h"

class UGameData;

UCLASS(Blueprintable, Config=Game)
class UFSDAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameData* GameData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameData> GameDataPath;
    
public:
    UFSDAssetManager();
};

