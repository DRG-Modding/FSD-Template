#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemUpgradePreviewComponent.generated.h"

class UItemUpgrade;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradePreviewComponentOnPreviewUpgradeChanged, UItemUpgrade*, PreviewUpgrade);

UCLASS(BlueprintType)
class UItemUpgradePreviewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FItemUpgradePreviewComponentOnPreviewUpgradeChanged OnPreviewUpgradeChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UItemUpgrade* PreviewUpgrade;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPreviewUpgrade(UItemUpgrade* InUpgrade);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPreviewUpgrade();
    
    UItemUpgradePreviewComponent();
};

