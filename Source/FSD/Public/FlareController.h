#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ShadowQualityChangedDelegate.h"
#include "FlareMeta.h"
#include "FlareController.generated.h"

class AActor;
class AFlare;
class AFlareGunProjectile;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UFlareController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShadowQualityChanged OnShadowQualityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
    
};

