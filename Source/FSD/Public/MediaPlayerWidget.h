#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMediaPlayerState.h"
#include "MediaPlayerWidget.generated.h"

class UFileMediaSource;
class UImage;
class UMediaPlayer;
class UMediaPlayerWidget;
class UMediaTexture;
class USoundClass;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API UMediaPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChanged, UMediaPlayerWidget*, InPlayerWidget, EMediaPlayerState, InState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChanged OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaTexture> SoftMediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundClass> SoftMediaSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFileMediaSource> SoftMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMediaTexture> WeakMediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USoundClass> WeakMediaSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMediaPlayer> WeakMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFileMediaSource> WeakMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlayerState PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OutputImage;
    
public:
    UMediaPlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChanged(EMediaPlayerState InState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySource(UFileMediaSource* InSource);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoftSource(TSoftObjectPtr<UFileMediaSource> InSource);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Callback_MediaPlayResumed();
    
    UFUNCTION(BlueprintCallable)
    void Callback_MediaOpened(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void Callback_MediaEndReached();
    
    UFUNCTION(BlueprintCallable)
    void Callback_MediaClosed();
    
};

