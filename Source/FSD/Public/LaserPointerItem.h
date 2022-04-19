#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "UObject/NoExportTypes.h"
#include "MarkerPlacedDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "ELaserPointerMarkerType.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerItem.generated.h"

class USceneComponent;
class ALaserPointerMarker;
class UPrimitiveComponent;
class ALaserPointerWaypoint;
class UDialogDataAsset;
class UObjectInfoComponent;
class UTerrainMaterial;
class AFSDGameState;
class UTexture2D;
class UObject;
class AActor;

UCLASS(Abstract)
class ALaserPointerItem : public AAnimatedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMarkerPlacedDelegate OnMarkerPlaced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerMarker> MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerMarker> SecondaryMarkerType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALaserPointerMarker> ActiveMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerWaypoint> WaypointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWaypoints;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALaserPointerWaypoint*> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NextWaypointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorMinerals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefaultLookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefaultEnemyShout;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* PointerComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LookAtHit;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObjectInfoComponent> LookAtInfo;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTerrainMaterial> LookAtTerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float LookAtDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
public:
    ALaserPointerItem();
protected:
    UFUNCTION(BlueprintCallable)
    void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleLaserVisible(bool aVisible);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceMarker(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SecondaryUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetPointTransform(FTransform& PointTransform);
    
};

