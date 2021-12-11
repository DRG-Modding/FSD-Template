#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AfflictionEntry.h"
#include "AfflictionEntriesArray.generated.h"

class UPawnAfflictionComponent;

USTRUCT(BlueprintType)
struct FAfflictionEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAfflictionEntry> Items;
    
    UPROPERTY(Export, NotReplicated)
    UPawnAfflictionComponent* Owner;
    
    FSD_API FAfflictionEntriesArray();
};

