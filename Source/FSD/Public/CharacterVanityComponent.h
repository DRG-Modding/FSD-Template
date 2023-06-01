#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHeadVanityType.h"
#include "EVanitySlot.h"
#include "EquippedVanity.h"
#include "TattooArmorItem.h"
#include "CharacterVanityComponent.generated.h"

class UArmorMaterialVanityItem;
class UBeardColorVanityItem;
class UCharacterVanityItems;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UPlayerCharacterID;
class USkeletalMeshComponent;
class UVanityItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterVanityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterVanityItems* AvailableVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBeardColorVanityItem* ShownBeardColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorClothMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedVanity, meta=(AllowPrivateAccess=true))
    FEquippedVanity EquippedVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* PreviewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UArmorMaterialVanityItem* PreviewedArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTattooArmorItem> Tattoos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DesireSleeveless, meta=(AllowPrivateAccess=true))
    bool DesireSleevelessArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character, bool inDesireSleeveless);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedVanity(const FEquippedVanity& equippedItems);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDesireSleevelessArmor(bool useSleeveless);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMedicalGown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Receive_GetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedVanity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesireSleeveless();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasSpawnedInMedbay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot, bool ignorePreviewItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDesireSleevelessArmor() const;
    
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

