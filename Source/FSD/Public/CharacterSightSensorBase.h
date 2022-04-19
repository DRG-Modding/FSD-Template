#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterSightSensorBase.generated.h"

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class UCharacterSightSensorBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UCharacterSightSensorBase();
};

