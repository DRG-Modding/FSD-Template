#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "WeaponEffectSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class UWeaponEffectSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ElectrifyPlatformsActorClass;
    
public:
    UWeaponEffectSubsystem();

};

