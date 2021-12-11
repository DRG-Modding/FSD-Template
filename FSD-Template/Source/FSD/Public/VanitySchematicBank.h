#pragma once
#include "CoreMinimal.h"
#include "SchematicBankBase.h"
#include "SchematicBankItem.h"
#include "VanitySchematicBank.generated.h"

class UVanityItem;
class USchematicCategory;

UCLASS()
class FSD_API UVanitySchematicBank : public USchematicBankBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USchematicCategory* SchematicCategory;
    
    UPROPERTY(EditAnywhere)
    TMap<UVanityItem*, FSchematicBankItem> vanityItems;
    
    UFUNCTION(BlueprintCallable)
    void AppendItems(TArray<UVanityItem*>& toArray) const;
    
    UVanitySchematicBank();
};

