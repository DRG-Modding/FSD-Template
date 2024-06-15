#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPropHuntRole.h"
#include "PropHuntContestantState.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPropHuntContestantState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropHuntRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DisguiseSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lives;
    
    FSD_API FPropHuntContestantState();
};

