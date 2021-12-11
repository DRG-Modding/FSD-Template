#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PawnStatEntry.h"
#include "PawnStatEntriesArray.generated.h"

class UPawnStatsComponent;

USTRUCT(BlueprintType)
struct FPawnStatEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPawnStatEntry> Items;
    
    UPROPERTY(Export, NotReplicated)
    UPawnStatsComponent* Owner;
    
    FSD_API FPawnStatEntriesArray();
};

