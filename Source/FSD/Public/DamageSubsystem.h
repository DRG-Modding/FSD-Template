#pragma once
#include "CoreMinimal.h"
#include "DamageSubsystemItem.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DamageSubsystem.generated.h"

UCLASS()
class UDamageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageSubsystemItem> Items;
    
public:
    UDamageSubsystem();
};

