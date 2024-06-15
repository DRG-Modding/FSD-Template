#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "Mutator.h"
#include "RestrictItemCategoriesMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URestrictItemCategoriesMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemCategory> RestrictedCategories;
    
    URestrictItemCategoriesMutator();

};

