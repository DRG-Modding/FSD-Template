#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VanityTestCharacterItem.generated.h"

class UVanityAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FVanityTestCharacterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVanityAnimInstance> AnimBP;
    
    FSD_API FVanityTestCharacterItem();
};

