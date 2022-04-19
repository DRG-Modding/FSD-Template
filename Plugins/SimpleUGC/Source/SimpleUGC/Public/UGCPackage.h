#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUGCDownloadVersion.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "UGCPackage.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCPackage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModURL;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Categories;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUGCApprovalStatus Status;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUGCDownloadVersion DownloadVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModPath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PakFileLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> PakFileAssets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AuthorURL;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsMounted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MountingToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DeprecatedLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ShowStatusForAudioCosmetic;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int64> Dependencies;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DependencyRemoved;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool PackagedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool OverridePackedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime LastUpdated;
    
    UUGCPackage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIdAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int64 GetIdAsInt();
    
};

