#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "LaserPointerData.h"
#include "MarkerPlacedDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELaserPointerMarkerType.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerItem.generated.h"

class USceneComponent;
class UDialogDataAsset;
class UTerrainMaterial;
class ALaserPointerMarker;
class ALaserPointerWaypoint;
class UPrimitiveComponent;
class UObjectInfoComponent;
class AFSDGameState;
class UObject;
class AActor;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class ALaserPointerItem : public AAnimatedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerPlacedDelegate OnMarkerPlaced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerMarker> MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerMarker> SecondaryMarkerType;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ALaserPointerMarker> ActiveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerWaypoint> WaypointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALaserPointerWaypoint*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextWaypointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefaultLookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefaultEnemyShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PointerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LookAtHit;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UObjectInfoComponent> LookAtInfo;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UTerrainMaterial> LookAtTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionControlLookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
public:
    ALaserPointerItem();
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleLaserVisible(bool aVisible);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlaceMarker(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SecondaryUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetPointTransform(FTransform& PointTransform);
    
};

