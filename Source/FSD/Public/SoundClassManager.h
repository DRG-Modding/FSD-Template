#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundClassManager.generated.h"

UCLASS(Blueprintable)
class USoundClassManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USoundClassManager();
};

