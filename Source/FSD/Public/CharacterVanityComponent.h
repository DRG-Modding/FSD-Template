#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHeadVanityType.h"
#include "EquippedVanity.h"
#include "TattooArmorItem.h"
#include "EVanitySlot.h"
#include "CharacterVanityComponent.generated.h"

class UBeardColorVanityItem;
class UCharacterVanityItems;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UVanityItem;
class USkeletalMeshComponent;
class UObject;
class UPlayerCharacterID;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCharacterVanityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterVanityItems* AvailableVanityItems;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBeardColorVanityItem* ShownBeardColor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorClothMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EquippedVanity, meta=(AllowPrivateAccess=true))
    FEquippedVanity EquippedVanity;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* SpecialTemporaryArmor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTattooArmorItem> Tattoos;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, USkeletalMeshComponent*> VanityMeshes;
    
public:
    UCharacterVanityComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateEquippedVanity(bool applyItems);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedVanity(const FEquippedVanity& equippedItems);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMedicalGown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedVanity();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasSpawnedInMedbay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterVanityItems* GetAvailableVanityItems() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EquipMedicalGown();
    
    UFUNCTION(BlueprintCallable)
    void EnforceValidPaintjob();
    
    UFUNCTION(BlueprintCallable)
    void CreateEquippedGear();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveMedicalGown();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EquipMedicalGown();
    
};

