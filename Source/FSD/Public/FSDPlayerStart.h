#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDPlayerStart.generated.h"

class AFSDPlayerController;
class UPlayerCharacterID;

UCLASS()
class AFSDPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerCharacterID* PrefferedClassID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AFSDPlayerController* usedBy;
    
    AFSDPlayerStart();
};

