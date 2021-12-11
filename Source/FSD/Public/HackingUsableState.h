#pragma once
#include "CoreMinimal.h"
#include "HackingUsableState.generated.h"

class AHackingToolItem;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FHackingUsableState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsHacked;
    
    UPROPERTY()
    TWeakObjectPtr<AHackingToolItem> BeingHackedByItem;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerCharacter> HackedBy;
    
    FSD_API FHackingUsableState();
};

