#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "PlayerAfflictionComponent.generated.h"

class UPlayerAfflictionOverlay;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAfflictionComponentOnShowOverlay, UPlayerAfflictionOverlay*, Overlay);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAfflictionComponentOnHideOverlay, UPlayerAfflictionOverlay*, Overlay);

UCLASS()
class UPlayerAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FPlayerAfflictionComponentOnShowOverlay OnShowOverlay;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerAfflictionComponentOnHideOverlay OnHideOverlay;
    
    UPROPERTY(Transient)
    TMap<UPlayerAfflictionOverlay*, int32> ActiveOverlays;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowPlayerOverlay(UPlayerAfflictionOverlay* Overlay);
    
    UFUNCTION(BlueprintCallable)
    void HidePlayerOverlay(UPlayerAfflictionOverlay* Overlay);
    
    UPlayerAfflictionComponent();
};

