#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterShouts.h"
#include "CharacterShoutsData.generated.h"

UCLASS(Blueprintable)
class UCharacterShoutsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterShouts Shouts;
    
    UCharacterShoutsData();
};

