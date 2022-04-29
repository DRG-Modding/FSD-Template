#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "HUDHealthBarSignatureDelegate.h"
#include "HealthBarLooks.h"
#include "UObject/NoExportTypes.h"
#include "EHealthbarType.h"
#include "HUDHealthBar.generated.h"

class UHealth;
class IHealth;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHUDHealthBar : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDHealthBarSignature OnOwnerDead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HealthColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHealthbarType, FHealthBarLooks> HealthBarLooks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutlineThickness;
    
    UPROPERTY(EditAnywhere)
    float HealthAnimationFactor;
    
    UPROPERTY(EditAnywhere)
    float HealthPerCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHealthCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealthCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimatedHealth;
    
    UPROPERTY(EditAnywhere, Transient)
    float MaxHealth;
    
public:
    UHUDHealthBar();
    UFUNCTION(BlueprintCallable)
    void SetHealthComponent(const TScriptInterface<IHealth>& Health, float Damage);
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealth() const;
    
};

