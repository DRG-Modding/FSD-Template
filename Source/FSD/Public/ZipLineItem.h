#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "GameplayTagContainer.h"
#include "ZipLineItem.generated.h"

class UDialogDataAsset;

UCLASS(Abstract, Blueprintable)
class AZipLineItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExcludeSurfaceTags;
    
public:
    AZipLineItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanFireWeapon(FText& FailMsg, UDialogDataAsset*& FailShout);
    
};

