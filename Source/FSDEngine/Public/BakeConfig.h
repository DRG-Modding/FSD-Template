#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BakeSettings.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BakeConfig.generated.h"

class UBuilderBase;

UCLASS(BlueprintType)
class UBakeConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FBakeSettings Settings;
    
    UPROPERTY(Transient)
    TMap<FName, UBuilderBase*> Objects;
    
    UPROPERTY(Transient)
    TArray<FString> Warnings;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorSetting(FName Name, FVector defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBuilderBase* GetObject(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntSetting(FName Name, int32 defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatSetting(FName Name, float defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolSetting(FName Name, bool defaultVal);
    
    UBakeConfig();
};

