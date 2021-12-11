#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DLCBase.generated.h"

class UDLCBase;

UCLASS(BlueprintType)
class FSD_API UDLCBase : public UDataAsset {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void QueryAllDLC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLCUnLocked(UDLCBase* dlc);
    
    UDLCBase();
};

