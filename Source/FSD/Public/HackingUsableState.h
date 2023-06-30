#pragma once
#include "CoreMinimal.h"
#include "HackingUsableState.generated.h"

class AHackingToolItem;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FHackingUsableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHackingToolItem> BeingHackedByItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> HackedBy;
    
    FSD_API FHackingUsableState();
};

