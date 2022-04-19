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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UDiscordWrapper* DiscordWI;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UCommunityGoalWrapper* CommunityWI;
    
    UPresenceSubSystem();
};

