#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHeadVanityType.h"
#include "TattooArmorItem.h"
#include "EVanitySlot.h"
#include "CharacterVanityComponent.generated.h"

class USkeletalMeshComponent;
class UBeardColorVanityItem;
class UMaterialInterface;
class UCharacterVanityItems;
class UMaterialInstanceDynamic;
class UVanityItem;
class UObject;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UCharacterVanityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCharacterVanityItems* AvailableVanityItems;
    
    UPROPERTY(Transient)
    UBeardColorVanityItem* ShownBeardColor;
    
    UPROPERTY(Transient)
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    
    UPROPERTY(Transient)
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EquippedVanity)
    TArray<UVanityItem*> EquippedVanity;
    
    UPROPERTY(Transient)
    UMaterialInterface* SkinMaterial;
    
    UPROPERTY(Transient)
    TArray<FTattooArmorItem> Tattoos;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(Export, Transient)
    TMap<EVanitySlot, USkeletalMeshComponent*> VanityMeshes;
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateEquippedVanity(bool applyItems);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetEquippedVanity(const TArray<UVanityItem*>& equippedItems);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedVanity();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterVanityItems* GetAvailableVanityItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EnforceValidPaintjob();
    
    UFUNCTION(BlueprintCallable)
    void CreateEquippedGear();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterVanityComponent();
};

