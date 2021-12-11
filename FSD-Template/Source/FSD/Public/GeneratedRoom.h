#pragma once
#include "CoreMinimal.h"
#include "RoomLine.h"
#include "Pillar.h"
#include "RoomBox.h"
#include "RoomEntrance.h"
#include "ResourceLocation.h"
#include "TriggerItem.h"
#include "RoomItem.h"
#include "GeneratedRoom.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FGeneratedRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FRoomLine> Lines;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FPillar> Pillars;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRoomBox> BoxCarvers;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRoomBox> BoxFillers;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FResourceLocation> ResourceLocations;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FRoomEntrance> Entrances;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FRoomItem> RoomItems;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTriggerItem> TriggerItems;
    
    FSD_API FGeneratedRoom();
};

