#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "ItemIDInterface.h"
#include "SpawnReleasedActor.h"
#include "EPickaxePartLocation.h"
#include "PickaxePreviewActor.generated.h"

class UMaterialInterface;
class UItemID;
class USceneComponent;
class UPickaxePart;

UCLASS()
class APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface, public ISpawnReleasedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;
    
public:
    APickaxePreviewActor();
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    
    // Fix for true pure virtual functions not being implemented
};

