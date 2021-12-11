#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPickaxePartLocation.h"
#include "ItemIDInterface.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "PickaxePreviewActor.generated.h"

class UMaterialInterface;
class USceneComponent;
class UItemID;
class UPickaxePart;

UCLASS()
class APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* TP_Root;
    
    UPROPERTY(Transient)
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(Transient)
    UMaterialInterface* EquippedMaterial;
    
public:
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    APickaxePreviewActor();
    
    // Fix for true pure virtual functions not being implemented
};

