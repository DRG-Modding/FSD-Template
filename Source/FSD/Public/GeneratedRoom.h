#pragma once
#include "CoreMinimal.h"
#include "RoomLine.h"
#include "Pillar.h"
#include "ResourceLocation.h"
#include "RoomBox.h"
#include "RoomEntrance.h"
#include "TriggerItem.h"
#include "RoomItem.h"
#include "GeneratedRoom.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FGeneratedRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomLine> Lines;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPillar> Pillars;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomBox> BoxCarvers;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomBox> BoxFillers;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceLocation> ResourceLocations;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomEntrance> Entrances;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomItem> RoomItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerItem> TriggerItems;
    
    FSD_API FGeneratedRoom();
};

