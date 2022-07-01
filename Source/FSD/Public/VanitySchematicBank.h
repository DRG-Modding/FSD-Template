#pragma once
#include "CoreMinimal.h"
#include "SchematicBankItem.h"
#include "SchematicBankBase.h"
#include "VanitySchematicBank.generated.h"

class USchematicCategory;
class UVanityItem;

UCLASS(Blueprintable)
class FSD_API UVanitySchematicBank : public USchematicBankBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* SchematicCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UVanityItem*, FSchematicBankItem> VanityItems;
    
    UVanitySchematicBank();
    UFUNCTION(BlueprintCallable)
    void AppendItems(TArray<UVanityItem*>& toArray) const;
    
};

