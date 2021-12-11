#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CharacterRecoilComponent.generated.h"

UCLASS(MinimalAPI)
class UCharacterRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FVector Recoil;
    
    UPROPERTY(Transient)
    FVector RecoilVelocity;
    
    UPROPERTY()
    FVector PrevError;
    
public:
    UCharacterRecoilComponent();
};

