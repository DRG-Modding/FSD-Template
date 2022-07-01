#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EItemSkinType.h"
#include "SkinnableComponent.generated.h"

class UItemSkin;
class AFSDPlayerState;
class UItemID;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API USkinnableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* EquippedSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* EquippedSkinMesh;
    
public:
    USkinnableComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateSkin(AFSDPlayerState* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<UItemSkin*> GetSkinsForItem(UItemID* ItemID, EItemSkinType SkinType);
    
    UFUNCTION(BlueprintCallable)
    static UItemSkin* GetEquippedSkinMesh(UItemID* ItemID, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static UItemSkin* GetEquippedSkinColor(UItemID* ItemID, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static UItemSkin* GetEquippedSkin(UItemID* ItemID, EItemSkinType SkinType, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UItemSkin*> GetEquippableColorSkins(UItemID* ItemID, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemSkin* GetDefaultItemSkin(UItemID* ItemID, EItemSkinType itemSkinType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemSkin* GetBaseColorSkinForMeshSkin(UItemID* ItemID, UItemSkin* meshSkin);
    
    UFUNCTION(BlueprintCallable)
    static void EquipSkin(UItemSkin* Skin, UItemID* ItemID, AFSDPlayerState* Player);
    
};

