#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SavableActor.generated.h"

UCLASS()
class ASavableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
public:
    ASavableActor();
};

