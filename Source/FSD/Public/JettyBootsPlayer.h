#pragma once
#include "CoreMinimal.h"
#include "JettyBootsPlayer.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FJettyBootsPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    FSD_API FJettyBootsPlayer();
};

