#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicIcon.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API UDynamicIcon : public UObject {
    GENERATED_BODY()
public:
    UDynamicIcon();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIconMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GenerateIconMaterial(UObject* materialOwner) const;
    
};

