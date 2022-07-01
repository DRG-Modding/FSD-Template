#pragma once
#include "CoreMinimal.h"
#include "ManagedEncounterItem.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "PrePlacedEncounterItem.h"
#include "EncounterManagerItem.generated.h"

USTRUCT(BlueprintType)
struct FEncounterManagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FManagedEncounterItem> ManagedEcnounterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate Callback;
    
    FSD_API FEncounterManagerItem();
};

