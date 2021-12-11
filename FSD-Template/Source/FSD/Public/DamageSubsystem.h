#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DamageSubsystemItem.h"
#include "DamageSubsystem.generated.h"

UCLASS()
class UDamageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FDamageSubsystemItem> Items;
    
public:
    UDamageSubsystem();
};

