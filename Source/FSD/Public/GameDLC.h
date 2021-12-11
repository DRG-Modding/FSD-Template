#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DLCBase.h"
#include "SaveGameIDInterface.h"
#include "GameDLC.generated.h"

class UTexture2D;
class UWindowWidget;
class UResourceData;
class UFileMediaSource;
class UObject;

UCLASS()
class UGameDLC : public UDLCBase, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SteamID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SteamName;
    
    UPROPERTY(EditAnywhere)
    FString OddishID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString XBoxDLCName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FString> SonyAdditionalContentLabelMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UWPStoreID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowOnDLCScreen;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Banner;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UWindowWidget> AnnouncementWidget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> Resources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerformancePoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> Movie;
    
public:
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
    
    UGameDLC();
    
    // Fix for true pure virtual functions not being implemented
};

