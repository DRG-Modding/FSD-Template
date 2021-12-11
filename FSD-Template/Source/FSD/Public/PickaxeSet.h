#pragma once
#include "CoreMinimal.h"
#include "PickaxeSet.generated.h"

class UPickaxePart;

USTRUCT(BlueprintType)
struct FPickaxeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* BladeFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* OptionalBladeBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* Pommel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* Shaft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPickaxePart* Material;
    
    FSD_API FPickaxeSet();
};

