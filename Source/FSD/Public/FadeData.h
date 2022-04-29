#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FadeData.generated.h"

class UFSDLevelLoadingPersistentWidget;
class UTexture;

USTRUCT(BlueprintType)
struct FFadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFSDLevelLoadingPersistentWidget> WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UFSDLevelLoadingPersistentWidget* Widget;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentFade;
    
    UPROPERTY(EditAnywhere, Transient)
    float TargetFade;
    
    UPROPERTY(EditAnywhere, Transient)
    float FadeSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFadeWorldOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCapFramerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bToSpaceRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* LoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugMsg;
    
    FSD_API FFadeData();
};

