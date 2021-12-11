#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FadeData.generated.h"

class UTexture;
class UFSDLevelLoadingPersistentWidget;

USTRUCT(BlueprintType)
struct FFadeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugOutput;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFSDLevelLoadingPersistentWidget> WidgetType;
    
    UPROPERTY(Export, Transient)
    UFSDLevelLoadingPersistentWidget* Widget;
    
    UPROPERTY(Transient)
    float CurrentFade;
    
    UPROPERTY(Transient)
    float TargetFade;
    
    UPROPERTY(Transient)
    float FadeSpeed;
    
    UPROPERTY(Transient)
    float Delay;
    
    UPROPERTY(Transient)
    bool bFadeWorldOnly;
    
    UPROPERTY(Transient)
    bool bCapFramerate;
    
    UPROPERTY(Transient)
    bool bToSpaceRig;
    
    UPROPERTY(Transient)
    UTexture* loadingImage;
    
    UPROPERTY(Transient)
    FString DebugMsg;
    
    FSD_API FFadeData();
};

