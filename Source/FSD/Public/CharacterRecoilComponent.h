#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CharacterRecoilComponent.generated.h"

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class UCharacterRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Recoil;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector RecoilVelocity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector PrevError;
    
public:
    UCharacterRecoilComponent();
};

