#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UGCSettings.generated.h"

UCLASS(Blueprintable, Config=UserGeneratedContentSettings)
class SIMPLEUGC_API UUGCSettings : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUGCSettingsUpdated);
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> slot1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slot1Icon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> slot2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slot2Icon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> slot3;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slot3Icon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> slot4;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slot4Icon;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCSettingsUpdated OnSettingsUpdated;
    
    UUGCSettings();
    UFUNCTION(BlueprintCallable)
    bool WriteToPlainText(const FString& Filename, const FString& TextContent, FText& OutError, bool Append);
    
    UFUNCTION(BlueprintCallable)
    void SetIconIndexOfSlot(int32 SlotNumber, int32 iconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveToSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void SaveToSelectedSlot();
    
    UFUNCTION(BlueprintCallable)
    void ResetSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReadFromPlainText(const FString& Filename, FString& OutTextContent);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetModNamesOfSlot(int32 SlotNumber, int32& outNumberOfUnknown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetModIdsOfSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIconIndexOfSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSlotContainMods(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot(int32 SlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void CleanupSlots();
    
};

