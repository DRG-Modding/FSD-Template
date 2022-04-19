#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UGCSettings.generated.h"

UCLASS(BlueprintType, Config=UserGeneratedContentSettings)
class SIMPLEUGC_API UUGCSettings : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUGCSettingsUpdated);
    
private:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FString> slot1;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FString> slot2;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FString> slot3;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FString> slot4;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 SelectedSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUGCSettingsUpdated OnSettingsUpdated;
    
    UUGCSettings();
    UFUNCTION(BlueprintCallable)
    bool WriteToPlainText(const FString& Filename, const FString& TextContent, FText& OutError, bool Append);
    
    UFUNCTION(BlueprintCallable)
    void SetNoSlotSelected();
    
    UFUNCTION(BlueprintCallable)
    void SaveToSlot(int32 slotNumber);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReadFromPlainText(const FString& Filename, FString& OutTextContent);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSlot(int32 slotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetModNamesOfSlot(int32 slotNumber, int32& outNumberOfUnknown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetModIdsOfSlot(int32 slotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSlotContainMods(int32 slotNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 DetectSelectedSlot();
    
    UFUNCTION(BlueprintCallable)
    void CleanupSlots();
    
};

