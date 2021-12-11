#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "BeardVanityItem.generated.h"

class USkeletalMesh;
class UVanityAnimInstance;

UCLASS(EditInlineNew)
class UBeardVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    float BeardThickness;
    
    UPROPERTY(EditAnywhere)
    bool RequiresSlimArmor;
    
    UPROPERTY(EditAnywhere)
    bool UseHairColor;
    
    UPROPERTY(EditAnywhere)
    bool UseArmorColor;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    
public:
    UBeardVanityItem();
};

