#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EscortDestination.generated.h"

class ADeepCSGWorld;
class UDamageComponent;
class UTerrainMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortDestinationOnShellCracked, int32, numberOfShellsCracked);

UCLASS()
class AEscortDestination : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEscortDestinationOnShellCracked OnShellCracked;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* EndExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite)
    float NextBreakpoint;
    
    UPROPERTY(BlueprintReadWrite)
    int32 StageForAnalytics;
    
protected:
    UPROPERTY(Replicated)
    int32 SecondsToDestroyHeartstone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> BreakpointsPercent;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float ShellThickness;
    
    UFUNCTION(BlueprintCallable)
    void MeltPlatforms(ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius);
    
    UFUNCTION(BlueprintCallable)
    UTerrainMaterial* GetTerrainMaterialByHandle(ADeepCSGWorld* CSGWorld, int32 materialHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecondsToDestroyObjective();
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointOnRadius(FVector CurrentLocation, int32 numberOfShellsCracked, FVector& dirFromCenter);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEscortDestination();
};

