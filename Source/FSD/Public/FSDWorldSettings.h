#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "FSDWorldSettings.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable)
class AFSDWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* CharacterClass;
    
public:
    AFSDWorldSettings();
};

