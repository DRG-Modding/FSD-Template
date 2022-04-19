#pragma once
#include "CoreMinimal.h"
#include "HackingUsableState.generated.h"

class APlayerCharacter;
class AHackingToolItem;

USTRUCT(BlueprintType)
struct FHackingUsableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsHacked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHackingToolItem> BeingHackedByItem;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> HackedBy;
    
    FSD_API FHackingUsableState();
};

