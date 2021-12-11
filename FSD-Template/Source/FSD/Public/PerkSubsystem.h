#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PerkSubsystem.generated.h"

class UPerkAsset;
class UPerkDelegateItem;

UCLASS(BlueprintType)
class UPerkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
    
    UPerkSubsystem();
};

