#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PerkSubsystem.generated.h"

class UPerkAsset;
class UPerkDelegateItem;

UCLASS(Blueprintable)
class FSD_API UPerkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;
    
public:
    UPerkSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
    
};

