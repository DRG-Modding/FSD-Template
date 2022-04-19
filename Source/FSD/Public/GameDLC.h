#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameDLC.generated.h"

class UObject;
class UResourceData;
class UTexture2D;
class UWindowWidget;
class UFileMediaSource;

UCLASS()
class UGameDLC : public UDLCBase, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OddishID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XBoxDLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> SonyAdditionalContentLabelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UWPStoreID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowOnDLCScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWindowWidget> AnnouncementWidget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerformancePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFileMediaSource> Movie;
    
public:
    UGameDLC();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeAnnounced(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    bool OpenStorePage(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void MarkAnnounced(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSonyAdditionalContentId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBanner_16_9() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBanner() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

