#pragma once
#include "CoreMinimal.h"
#include "EArmorMeshType.h"
#include "TattooArmorItem.h"
#include "VanityItem.h"
#include "ArmorVanityItem.generated.h"

class AFSDPlayerState;
class UAnimInstance;
class UArmorMaterialVanityItem;
class UCharacterVanityComponent;
class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class UArmorVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArmorMeshType, TSoftObjectPtr<USkeletalMesh>> TPArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EArmorMeshType, TSoftObjectPtr<USkeletalMesh>> FPArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSleevelessUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CropBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanOnlyUseDefaultArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArmorMaterialVanityItem* DefaultArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTattooArmorItem> Tattoos;
    
public:
    UArmorVanityItem();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNewArmorType(UCharacterVanityComponent* Gear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PreviewArmor(AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSleevelessArmorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArmorMeshType GetFPMeshType() const;
    
};

