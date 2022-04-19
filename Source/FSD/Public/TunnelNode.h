#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomNodeBase.h"
#include "RoomEntrance.h"
#include "TunnelPath.h"
#include "TunnelNode.generated.h"

class UTunnelParameters;

USTRUCT(BlueprintType)
struct FTunnelNode : public FRoomNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntranceRoomID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExitRoomID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRoomEntrance Entrance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRoomEntrance Exit;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelParameters* ParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FTunnelPath Path;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector DirtStartLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool AddDirt;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float WeightedResourceAmount;
    
    FSD_API FTunnelNode();
};

