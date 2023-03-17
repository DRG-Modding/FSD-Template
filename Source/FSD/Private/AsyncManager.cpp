#include "AsyncManager.h"

UObject* UAsyncManager::SyncLoadAsset(const TSoftObjectPtr<UObject>& Asset) {
    return NULL;
}

void UAsyncManager::ReleaseAllHandles() {
}

UClass* UAsyncManager::Receive_SyncLoadClass(TSoftClassPtr<UObject> Asset) {
    return NULL;
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

