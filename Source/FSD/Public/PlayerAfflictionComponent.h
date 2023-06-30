#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "PlayerAfflictionComponent.generated.h"

class APlayerCharacter;
class UPlayerAfflictionOverlay;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverlayDelegate, UPlayerAfflictionOverlay*, Overlay);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayDelegate OnShowOverlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayDelegate OnHideOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayerAfflictionOverlay*, int32> ActiveOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
public:
    UPlayerAfflictionComponent();
    UFUNCTION(BlueprintCallable)
    void ShowPlayerOverlay(UPlayerAfflictionOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable)
    void HidePlayerOverlay(UPlayerAfflictionOverlay* Overlay);
    
};

