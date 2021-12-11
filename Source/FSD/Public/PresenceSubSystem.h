#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PresenceSubSystem.generated.h"

class UDiscordWrapper;
class UCommunityGoalWrapper;

UCLASS(BlueprintType)
class UPresenceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UDiscordWrapper* DiscordWI;
    
    UPROPERTY(BlueprintReadOnly)
    UCommunityGoalWrapper* CommunityWI;
    
    UPresenceSubSystem();
};

