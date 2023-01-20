#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPickaxePartLocation.h"
#include "ItemIDInterface.h"
#include "PickaxeMeshInstance.h"
#include "PickaxePartEquip.h"
#include "SpawnReleasedActor.h"
#include "PickaxePreviewActor.generated.h"

class UItemID;
class UMaterialInterface;
class UPickaxePart;
class USceneComponent;

UCLASS(Blueprintable)
class APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface, public ISpawnReleasedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;
    
public:
    APickaxePreviewActor();
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    
    // Fix for true pure virtual functions not being implemented
};

