#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerkClaimedDelegateDelegate.h"
#include "PerkEquipDelegateDelegate.h"
#include "PerkHighlightedDelegateDelegate.h"
#include "PerkIntDelegateDelegate.h"
#include "PerkDelegateItem.generated.h"

UCLASS(Blueprintable)
class FSD_API UPerkDelegateItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkClaimedDelegate OnPerkClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkEquipDelegate OnPerkEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkEquipDelegate OnPerkUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkHighlightedDelegate OnPerkHighlighted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkIntDelegate OnChargesUsedChanged;
    
    UPerkDelegateItem();
};

