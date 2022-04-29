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
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExcludeSurfaceTags;
    
public:
    AZipLineItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanFireWeapon(FText& FailMsg, UDialogDataAsset*& FailShout);
    
};

