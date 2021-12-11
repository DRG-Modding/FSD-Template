#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameDLCSave.generated.h"

USTRUCT(BlueprintType)
struct FGameDLCSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<FGuid> AnnouncedIDs;
    
public:
    FSD_API FGameDLCSave();
};

