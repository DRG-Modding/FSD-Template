#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShellCrackedSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EscortDestination.generated.h"

class UDamageComponent;
class ADeepCSGWorld;
class UTerrainMaterial;

UCLASS()
class FSD_API AEscortDestination : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FShellCrackedSignature OnShellCracked;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float NextBreakpoint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StageForAnalytics;
    
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
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

