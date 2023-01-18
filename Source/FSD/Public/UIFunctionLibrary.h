#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIFunctionLibrary.generated.h"

class UMissionNameBank;
class UNewsTextLists;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex, int32 iconIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item);
    
    UFUNCTION(BlueprintPure)
    static int64 GetUnixTimeStamp();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, UNewsTextLists* wordList, UMissionNameBank* MissionNameBank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllItemUINotifications(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool& HasNotification, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item);
    
};

