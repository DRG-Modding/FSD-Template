#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAsyncPersistence.h"
#include "EAsyncLoadPriority.h"
#include "UObject/NoExportTypes.h"
#include "AsyncManager.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE(FAsyncManagerOnLoadComplete);

UCLASS(BlueprintType)
class UAsyncManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UObject*> PermanentReferences;
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClass(const TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UAsyncManager();
};

