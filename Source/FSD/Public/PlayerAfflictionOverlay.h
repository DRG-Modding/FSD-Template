#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAfflictionOverlay.generated.h"

class UTexture2D;
class USoundCue;
class UPlayerAfflictionOverlayWidget;

UCLASS(BlueprintType)
class UPlayerAfflictionOverlay : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextureTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerAfflictionOverlayWidget> WidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> Audio2D_OnBegin;
    
    UPlayerAfflictionOverlay();
};

