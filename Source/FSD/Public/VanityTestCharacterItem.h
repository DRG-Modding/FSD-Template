#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VanityTestCharacterItem.generated.h"

class USkeletalMesh;
class UVanityAnimInstance;

USTRUCT(BlueprintType)
struct FVanityTestCharacterItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UVanityAnimInstance> AnimBP;
    
    FSD_API FVanityTestCharacterItem();
};

