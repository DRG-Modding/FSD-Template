#include "AsyncManager.h"

class UObject;

UClass* UAsyncManager::SyncLoadClass(const TSoftClassPtr<UObject>& Asset) {
    return NULL;
}

UObject* UAsyncManager::SyncLoadAsset(const TSoftObjectPtr<UObject>& Asset) {
    return NULL;
}

void UAsyncManager::ReleaseAllHandles() {
}

void UAsyncManager::AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClass(const TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

UAsyncManager::UAsyncManager() {
}

