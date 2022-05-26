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
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AHackingToolItem> BeingHackedByItem;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<APlayerCharacter> HackedBy;
    
    FSD_API FHackingUsableState();
};

