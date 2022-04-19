#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomNodeBase.h"
#include "RoomEntrance.h"
#include "GeneratedRoom.h"
#include "RoomGeneratorItem.h"
#include "RoomNode.generated.h"

USTRUCT(BlueprintType)
struct FRoomNode : public FRoomNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarvePass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> EntranceIDs;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ExitIDs;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomEntrance> RoomEntrances;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanHaveEnemies;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedRoom> Rooms;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ResourceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanBeUsedForRoomBasedDistribution;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float WeightedResourceAmount;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomGeneratorItem> RoomGenerators;
    
    FSD_API FRoomNode();
};

