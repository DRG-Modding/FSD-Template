#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WeaponFireOwner.generated.h"

class APlayerCharacter;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UWeaponFireOwner : public UInterface {
    GENERATED_BODY()
};

class IWeaponFireOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual APlayerCharacter* GetPlayerCharacter() const PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FQuat GetMuzzleQuat() const PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetMuzzleLocation() const PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsLocallyControlled() const PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsFirstPerson() const PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

