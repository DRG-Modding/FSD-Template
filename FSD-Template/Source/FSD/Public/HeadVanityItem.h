#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "EHeadVanityType.h"
#include "ECharacterHeadMesh.h"
#include "HeadVanityItem.generated.h"

class USkeletalMesh;
class UVanityAnimInstance;
class UMaterialInterface;

UCLASS(EditInlineNew)
class UHeadVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(EditAnywhere)
    bool HideEyebrows;
    
    UPROPERTY(EditAnywhere)
    bool HideSideburns;
    
    UPROPERTY(EditAnywhere)
    bool HideMoustache;
    
    UPROPERTY(EditAnywhere)
    bool HideBeard;
    
    UPROPERTY(EditAnywhere)
    bool HideAll;
    
    UPROPERTY(VisibleAnywhere)
    bool HideHead;
    
    UPROPERTY(EditAnywhere)
    ECharacterHeadMesh HeadMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    
public:
    UHeadVanityItem();
};

