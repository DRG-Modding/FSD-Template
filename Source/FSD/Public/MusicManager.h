#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActiveAudioItem.h"
#include "MusicHandle.h"
#include "MusicManager.generated.h"

class UMusicCategory;
class UMusicLibrary;
class USoundBase;

UCLASS(Blueprintable)
class UMusicManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMusicHandle, FActiveAudioItem> ActiveAudio;
    
public:
    UMusicManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHandle(FMusicHandle Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCategory(UMusicCategory* Category);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaused(bool IsPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle PlayLibrary(UMusicLibrary* library, int32 musicIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle Play(USoundBase* Music, UMusicCategory* Category);
    
};

