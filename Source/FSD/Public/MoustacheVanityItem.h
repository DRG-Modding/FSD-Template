#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "MoustacheVanityItem.generated.h"

class USkeletalMesh;
class UTagVanityMoustaches;
class UVanityAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class UMoustacheVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresSlimArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UTagVanityMoustaches*> VanityTags;
    
public:
    UMoustacheVanityItem();

};

