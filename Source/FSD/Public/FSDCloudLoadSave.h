#pragma once
#include "CoreMinimal.h"
#include "SDCloudFailedDelegate.h"
#include "SDCloudLoadDelegate.h"
#include "UObject/Object.h"
#include "FSDCloudLoadSave.generated.h"

class UFSDCloudSaveHandler;

UCLASS(Blueprintable)
class UFSDCloudLoadSave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDCloudLoad OnCloudLoadAll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDCloudFailed OnCloudLoadAllFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDCloudSaveHandler* CloudSaveHandler;
    
public:
    UFSDCloudLoadSave();
    UFUNCTION(BlueprintCallable)
    void StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset);
    
};

