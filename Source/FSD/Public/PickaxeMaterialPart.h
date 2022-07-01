#pragma once
#include "CoreMinimal.h"
#include "PickaxePartItem.h"
#include "PickaxeMaterialPart.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UDynamicIcon;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UPickaxeMaterialPart : public UPickaxePartItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicIcon* DynamicIcon;
    
public:
    UPickaxeMaterialPart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* CreateIcon(UObject* Owner) const;
    
};

