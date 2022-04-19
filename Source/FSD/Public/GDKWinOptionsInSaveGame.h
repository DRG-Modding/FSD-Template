#pragma once
#include "CoreMinimal.h"
#include "GDKWinOptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FGDKWinOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool SaveGameOptionsValid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ScreenMode;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 ResolutionSizeX;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 ResolutionSizeY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseVSync;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FrameRateLimit;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Sharpening;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 OverallQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PostProcessingQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 EffectsQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ViewDistanceQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString LocalGameServerName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString CurrentAudioOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool UseDefaultAudioOutputDevice;
    
    FSD_API FGDKWinOptionsInSaveGame();
};

