#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PickaxeSetReward.generated.h"

class UPickaxePart;

UCLASS(BlueprintType, EditInlineNew)
class UPickaxeSetReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* BladeFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* OptionalBladeBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* Pommel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* Handle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* Shaft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* Head;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* Material;
    
public:
    UPickaxeSetReward();
};

