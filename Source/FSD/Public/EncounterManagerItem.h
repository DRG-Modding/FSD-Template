#pragma once
#include "CoreMinimal.h"
#include "PrePlacedEncounterItem.h"
#include "ManagedEncounterItem.h"
#include "EncounterManagerItem.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEncounterManagerItemCallback, APawn*, enemy);

USTRUCT(BlueprintType)
struct FEncounterManagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FManagedEncounterItem> ManagedEcnounterItems;
    
    UPROPERTY(Transient)
    TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems;
    
    UPROPERTY(Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    bool IsRoom;
    
    UPROPERTY(Transient)
    FEncounterManagerItemCallback Callback;
    
    FSD_API FEncounterManagerItem();
};

