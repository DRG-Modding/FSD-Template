#pragma once
#include "CoreMinimal.h"
#include "ProceduralSetup.h"
#include "GameplayTagContainer.h"
#include "CaveBurner.generated.h"

class URoomGenerator;

UCLASS()
class ACaveBurner : public AProceduralSetup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RoomRadius;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RoomTags;
    
    UPROPERTY(EditAnywhere)
    bool CanOnlyBeUsedOnce;
    
    UPROPERTY(EditInstanceOnly)
    URoomGenerator* RoomGenerator;
    
public:
    ACaveBurner();
};

