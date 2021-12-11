#pragma once
#include "CoreMinimal.h"
#include "GDKWinOptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FGDKWinOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool SaveGameOptionsValid;
    
    UPROPERTY()
    int32 ScreenMode;
    
    UPROPERTY()
    uint32 ResolutionSizeX;
    
    UPROPERTY()
    uint32 ResolutionSizeY;
    
    UPROPERTY()
    bool bUseVSync;
    
    UPROPERTY()
    float FrameRateLimit;
    
    UPROPERTY()
    float Sharpening;
    
    UPROPERTY()
    int32 AntiAliasingType;
    
    UPROPERTY()
    float Gamma;
    
    UPROPERTY()
    int32 OverallQuality;
    
    UPROPERTY()
    float ResolutionScale;
    
    UPROPERTY()
    int32 TextureQuality;
    
    UPROPERTY()
    int32 ShadowQuality;
    
    UPROPERTY()
    int32 AntiAliasingQuality;
    
    UPROPERTY()
    int32 PostProcessingQuality;
    
    UPROPERTY()
    int32 EffectsQuality;
    
    UPROPERTY()
    int32 ViewDistanceQuality;
    
    UPROPERTY()
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY()
    FString LocalGameServerName;
    
    UPROPERTY()
    FString CurrentAudioOutputDeviceId;
    
    UPROPERTY()
    bool UseDefaultAudioOutputDevice;
    
    FSD_API FGDKWinOptionsInSaveGame();
};

