#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ShadowQualityChangedDelegate.h"
#include "FlareMeta.h"
#include "UObject/NoExportTypes.h"
#include "FlareController.generated.h"

class AFlare;
class AActor;
class AFlareGunProjectile;
class UObject;

UCLASS(Blueprintable)
class UFlareController : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShadowQualityChanged OnShadowQualityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFlareMeta> FlaresMeta;
    
public:
    UFlareController();
    UFUNCTION(BlueprintCallable)
    static void UnregisterFlareGunProjectile(AFlareGunProjectile* flareprj);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterFlare(AFlare* Flare);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFlareGunProjectile(AFlareGunProjectile* flareprj);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFlare(AFlare* Flare);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
    
};

