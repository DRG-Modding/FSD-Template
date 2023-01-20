#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SchematicItem.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USchematicItem : public UObject {
    GENERATED_BODY()
public:
    USchematicItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
};

