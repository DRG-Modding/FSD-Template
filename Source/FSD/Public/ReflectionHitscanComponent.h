#pragma once
#include "CoreMinimal.h"
#include "HitscanBaseComponent.h"
#include "ReflectiveHitscanHit.h"
#include "ReflectionHitscanComponent.generated.h"

class UTerrainType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReflectionHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* PlatformTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowImpactOnReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageOnReflections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightenReflectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReflectionCount;
    
public:
    UReflectionHitscanComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterHit_Reflection(const FReflectiveHitscanHit& Hit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RegisterHit(const FReflectiveHitscanHit& Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit(const FReflectiveHitscanHit& Hit);
    
};

