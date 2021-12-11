#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FSDCloudLoadSave.generated.h"

class UFSDSaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDCloudLoadSaveOnCloudLoadAll, const TArray<UFSDSaveGame*>&, savegames);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDCloudLoadSaveOnCloudLoadAllFailed);

UCLASS(BlueprintType)
class UFSDCloudLoadSave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDCloudLoadSaveOnCloudLoadAll OnCloudLoadAll;
    
    UPROPERTY(BlueprintAssignable)
    FFSDCloudLoadSaveOnCloudLoadAllFailed OnCloudLoadAllFailed;
    
    UPROPERTY(Transient)
    int32 NumFailedSaves;
    
    UFUNCTION(BlueprintCallable)
    void StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset);
    
    UFSDCloudLoadSave();
};

