#pragma once
#include "CoreMinimal.h"
#include "TattooArmorItem.h"
#include "VanityItem.h"
#include "ArmorVanityItem.generated.h"

class UArmorMaterialVanityItem;
class USkeletalMesh;
class UAnimInstance;
class UMaterialInterface;
class AFSDPlayerState;

UCLASS(EditInlineNew)
class UArmorVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> BeardCompatibleMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> FPMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(EditAnywhere)
    bool CropBeard;
    
    UPROPERTY(EditAnywhere)
    float ArmorThickness;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanOnlyUseDefaultArmorMaterial;
    
    UPROPERTY(EditAnywhere)
    UArmorMaterialVanityItem* DefaultArmorMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FTattooArmorItem> Tattoos;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreviewArmor(AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial) const;
    
    UArmorVanityItem();
};

