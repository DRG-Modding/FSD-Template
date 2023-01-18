#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlagueCleanerResourceChangedDelegate.h"
#include "PlagueCleanupItem.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireOwner.h"
#include "PlagueSoaperItem.generated.h"

class APlayerCharacter;
class AProjectileBase;
class UProjectileLauncherComponent;

UCLASS(Blueprintable)
class APlagueSoaperItem : public APlagueCleanupItem, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileLauncherComponent* projectileLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlagueCleanerResourceChanged OnAmmoChanged;
    
    APlagueSoaperItem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

