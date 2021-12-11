#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameDLCSettings.generated.h"

class UObject;
class UGameDLC;

UCLASS(BlueprintType)
class FSD_API UGameDLCSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSet<UGameDLC*> StoreDLCs;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGameDLC*> GetStoreDLCs(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGameDLC*> GetAnnouncableDLCs(UObject* WorldContext);
    
public:
    UGameDLCSettings();
};

