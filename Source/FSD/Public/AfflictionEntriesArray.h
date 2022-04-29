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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAfflictionEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    UPawnAfflictionComponent* Owner;
    
    FSD_API FAfflictionEntriesArray();
};

