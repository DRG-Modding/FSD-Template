#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "UObject/NoExportTypes.h"
#include "UGCPackage.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCPackage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString Version;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString Categories;
    
    UPROPERTY(BlueprintReadOnly)
    EUGCApprovalStatus Status;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModPath;
    
    UPROPERTY(BlueprintReadOnly)
    FString PakFileLocation;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> PakFileAssets;
    
    UPROPERTY(BlueprintReadOnly)
    FString Author;
    
    UPROPERTY(BlueprintReadOnly)
    FString AuthorURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsMounted;
    
    UPROPERTY(BlueprintReadWrite)
    bool MountingToBeApplied;
    
    UPROPERTY(BlueprintReadWrite)
    bool DeprecatedLocation;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowStatusForAudioCosmetic;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int64> Dependencies;
    
    UPROPERTY(BlueprintReadWrite)
    bool DependencyRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    bool PackagedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite)
    bool OverridePackedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime LastUpdated;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIdAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int64 GetIdAsInt();
    
    UUGCPackage();
};

