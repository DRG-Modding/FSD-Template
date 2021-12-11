#pragma once
#include "CoreMinimal.h"
#include "RoomNodeBase.h"
#include "RoomEntrance.h"
#include "TunnelPath.h"
#include "UObject/NoExportTypes.h"
#include "TunnelNode.generated.h"

class UTunnelParameters;

USTRUCT(BlueprintType)
struct FTunnelNode : public FRoomNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 EntranceRoomID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 ExitRoomID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRoomEntrance Entrance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRoomEntrance Exit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTunnelParameters* ParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    FTunnelPath Path;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector DirtStartLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool AddDirt;
    
    UPROPERTY(Transient)
    float WeightedResourceAmount;
    
    FSD_API FTunnelNode();
};

