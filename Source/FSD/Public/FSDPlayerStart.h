#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPlayerStart.generated.h"

class UPlayerCharacterID;
class AFSDPlayerController;

UCLASS()
class AFSDPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* PrefferedClassID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* usedBy;
    
    AFSDPlayerStart();
};

