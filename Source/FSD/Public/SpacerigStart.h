#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ESpacerigStartType.h"
#include "SpacerigStart.generated.h"

class AFSDPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpacerigStartOnPlayerLeave, AFSDPlayerController*, Controller);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpacerigStartOnPlayerSpawn, AFSDPlayerController*, Controller);

UCLASS()
class ASpacerigStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpacerigStartOnPlayerSpawn OnPlayerSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSpacerigStartOnPlayerLeave OnPlayerLeave;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AFSDPlayerController* usedBy;
    
    UPROPERTY(EditAnywhere)
    ESpacerigStartType StartType;
    
    ASpacerigStart();
};

