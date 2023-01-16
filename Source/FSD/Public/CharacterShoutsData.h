#pragma once
#include "CoreMinimal.h"
#include "CharacterShouts.h"
#include "Engine/DataAsset.h"
#include "CharacterShoutsData.generated.h"

UCLASS(Blueprintable)
class UCharacterShoutsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterShouts Shouts;
    
    UCharacterShoutsData();
};

