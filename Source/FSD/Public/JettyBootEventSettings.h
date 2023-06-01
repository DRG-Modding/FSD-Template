#pragma once
#include "CoreMinimal.h"
#include "JettyBootEventSettings.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FJettyBootEventSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> JettyBootCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> JettyBootArcadeOverlay;
    
    FSD_API FJettyBootEventSettings();
};

