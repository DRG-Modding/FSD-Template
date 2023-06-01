#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "JettyBootSetting.h"
#include "JettyBootSettings.generated.h"

UCLASS(Blueprintable)
class UJettyBootSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJettyBootSetting> LevelSettings;
    
    UJettyBootSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FJettyBootSetting GetLevelSetting(int32 InLevel) const;
    
};

