#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ShellCrackedSignatureDelegate.h"
#include "EscortDestination.generated.h"

class ADeepCSGWorld;
class UDamageComponent;
class UTerrainMaterial;

UCLASS(Blueprintable)
class FSD_API AEscortDestination : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShellCrackedSignature OnShellCracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextBreakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageForAnalytics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SecondsToDestroyHeartstone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BreakpointsPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShellThickness;
    
public:
    AEscortDestination();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void MeltPlatforms(ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius);
    
    UFUNCTION(BlueprintCallable)
    UTerrainMaterial* GetTerrainMaterialByHandle(ADeepCSGWorld* CSGWorld, int32 materialHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecondsToDestroyObjective();
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointOnRadius(FVector CurrentLocation, int32 numberOfShellsCracked, FVector& dirFromCenter);
    
};

