#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AsyncLoadCompleteDelegateDelegate.h"
#include "EAsyncLoadPriority.h"
#include "EAsyncPersistence.h"
#include "AsyncManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAsyncManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PermanentReferences;
    
public:
    UAsyncManager();
    UFUNCTION(BlueprintCallable)
    UObject* SyncLoadAsset(const TSoftObjectPtr<UObject>& Asset);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles();
    
    UFUNCTION(BlueprintCallable)
    UClass* Receive_SyncLoadClass(TSoftClassPtr<UObject> Asset);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClass(const TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
};

