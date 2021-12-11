#pragma once
#include "CoreMinimal.h"
#include "ERoomType.h"
#include "RoomNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "RoomEntrance.h"
#include "GeneratedRoom.h"
#include "RoomGeneratorItem.h"
#include "RoomNode.generated.h"

USTRUCT(BlueprintType)
struct FRoomNode : public FRoomNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    ERoomType RoomType;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    int32 CarvePass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<int32> EntranceIDs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<int32> ExitIDs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FRoomEntrance> RoomEntrances;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanHaveEnemies;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FGeneratedRoom> Rooms;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ResourceMultiplier;
    
    UPROPERTY(Transient)
    float WeightedResourceAmount;
    
    UPROPERTY(Transient)
    TArray<FRoomGeneratorItem> RoomGenerators;
    
    FSD_API FRoomNode();
};

