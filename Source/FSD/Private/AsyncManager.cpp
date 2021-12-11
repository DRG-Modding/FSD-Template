#include "AsyncManager.h"

class UObject;

void UAsyncManager::ReleaseAllHandles() {
}

void UAsyncManager::AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClass(const TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncManagerOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority) {
}

UAsyncManager::UAsyncManager() {
}

