#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSDUserWidget.h"
#include "HealthBarLooks.h"
#include "EHealthbarType.h"
#include "HUDHealthBar.generated.h"

class UHUDHealthBar;
class UHealth;
class IHealth;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDHealthBarOnOwnerDead, UHUDHealthBar*, HealthBar);

UCLASS(Abstract, EditInlineNew)
class UHUDHealthBar : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHUDHealthBarOnOwnerDead OnOwnerDead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HealthColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DamageColor;
    
    UPROPERTY(EditAnywhere)
    TMap<EHealthbarType, FHealthBarLooks> HealthBarLooks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutlineThickness;
    
    UPROPERTY(EditAnywhere)
    float HealthAnimationFactor;
    
    UPROPERTY(EditAnywhere)
    float HealthPerCell;
    
    UPROPERTY(EditAnywhere)
    int32 MinHealthCells;
    
    UPROPERTY(EditAnywhere)
    int32 MaxHealthCells;
    
    UPROPERTY(Transient)
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AnimatedHealth;
    
    UPROPERTY(Transient)
    float MaxHealth;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHealthComponent(const TScriptInterface<IHealth>& Health, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UHUDHealthBar();
};

