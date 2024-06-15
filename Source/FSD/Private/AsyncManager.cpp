#include "AsyncManager.h"

UAsyncManager::UAsyncManager() {
}

UClass* UAsyncManager::SyncLoadClass(TSoftClassPtr<UObject> Asset) {
    return NULL;
}

UObject* UAsyncManager::SyncLoadAsset(TSoftObjectPtr<UObject> Asset) {
    return NULL;
}

void UAsyncManager::ReleaseAllHandles() {
}

TArray<UClass*> UAsyncManager::Receive_SyncLoadClasses(TArray<TSoftClassPtr<UObject>> assets) {
    return TArray<UClass*>();
}

UClass* UAsyncManager::Receive_SyncLoadClass(TSoftClassPtr<UObject> Asset) {
    return NULL;
}

void UAsyncManager::AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClasses(TArray<TSoftClassPtr<UObject>> Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadSoftClass(TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}

void UAsyncManager::AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority) {
}


