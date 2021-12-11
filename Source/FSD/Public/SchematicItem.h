#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SchematicItem.generated.h"

class UTexture;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class USchematicItem : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    USchematicItem();
};

