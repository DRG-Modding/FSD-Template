#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AfflictionEntry.generated.h"

class UPawnAffliction;

USTRUCT(BlueprintType)
struct FAfflictionEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPawnAffliction* Affliction;
    
    FSD_API FAfflictionEntry();
};

