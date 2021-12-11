#pragma once
#include "CoreMinimal.h"
#include "FSDServerListEntryModModel.h"
#include "FSDServerListEntryModel.generated.h"

USTRUCT(BlueprintType)
struct FFSDServerListEntryModel {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString DRG_SERVERNAME;
    
    UPROPERTY()
    FString DRG_SERVERNAME_SAN;
    
    UPROPERTY()
    int32 DRG_GLOBALMISSION_SEED;
    
    UPROPERTY()
    int32 DRG_MISSION_SEED;
    
    UPROPERTY()
    int32 DRG_DIFF;
    
    UPROPERTY()
    int32 DRG_GAMESTATE;
    
    UPROPERTY()
    int32 DRG_PWREQUIRED;
    
    UPROPERTY()
    int32 DRG_PRIVATE;
    
    UPROPERTY()
    int32 DRG_NUMPLAYERS;
    
    UPROPERTY()
    FString DRG_CLASSES;
    
    UPROPERTY()
    int32 DRG_CLASSLOCK;
    
    UPROPERTY()
    int32 DRG_FULL;
    
    UPROPERTY()
    FString DRG_REGION;
    
    UPROPERTY()
    FString DRG_START;
    
    UPROPERTY()
    int32 DRG_VERSION;
    
    UPROPERTY()
    FString HostUserID;
    
    UPROPERTY()
    FString DRG_MISSIONSTRUCTURE;
    
    UPROPERTY()
    FString P2PAddr;
    
    UPROPERTY()
    int32 P2PPORT;
    
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    TArray<FFSDServerListEntryModModel> Mods;
    
    FSD_API FFSDServerListEntryModel();
};

