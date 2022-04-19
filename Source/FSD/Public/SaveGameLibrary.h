#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveGameSnapShot.h"
#include "SaveGameLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class USaveGameLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveGameLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetSaveGameSnapShot(UObject* WorldContext, const FString& Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetUserSaveGameSlots(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetAllSaveGameSlots();
    
};

