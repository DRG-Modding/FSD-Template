#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "SideburnsVanityItem.generated.h"

class USkeletalMesh;
class UTagVanitySideburns;
class UVanityAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class USideburnsVanityItem : public UVanityItem {
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
    TSet<UTagVanitySideburns*> VanityTags;
    
public:
    USideburnsVanityItem();

};

