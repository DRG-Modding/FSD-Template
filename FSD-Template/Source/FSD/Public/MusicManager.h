#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MusicHandle.h"
#include "ActiveAudioItem.h"
#include "MusicManager.generated.h"

class UMusicCategory;
class UMusicLibrary;
class USoundBase;

UCLASS(BlueprintType)
class UMusicManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<FMusicHandle, FActiveAudioItem> ActiveAudio;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHandle(FMusicHandle Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCategory(UMusicCategory* Category);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaused(bool IsPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle PlayLibrary(UMusicLibrary* library);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle Play(USoundBase* Music, UMusicCategory* Category);
    
    UMusicManager();
};

