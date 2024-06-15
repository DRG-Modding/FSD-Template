#pragma once
#include "CoreMinimal.h"
#include "MediaSoundComponent.h"
#include "MediaSoundController.generated.h"

class APlayerController;
class UMediaTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMediaSoundController : public UMediaSoundComponent {
    GENERATED_BODY()
public:
    UMediaSoundController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StopMediaSoundController(APlayerController* InPlayerController, UMediaTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllMediaSoundControllers(APlayerController* InPlayerController);
    
};

