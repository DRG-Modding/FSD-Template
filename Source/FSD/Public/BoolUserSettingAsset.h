#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BoolUserSettingAsset.generated.h"

UCLASS(Blueprintable)
class FSD_API UBoolUserSettingAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingDisplayTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SettingDefaultValue;
    
public:
    UBoolUserSettingAsset();
    UFUNCTION(BlueprintCallable)
    void SetValue(bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue() const;
    
};

