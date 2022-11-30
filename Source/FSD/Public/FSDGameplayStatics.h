#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ScaledEffect.h"
#include "DecalData.h"
#include "UObject/NoExportTypes.h"
#include "FSDGameplayStatics.generated.h"

class UObject;
class UFXSystemComponent;
class UDecalComponent;
class AActor;
class UMaterialInterface;
class UAudioComponent;

UCLASS(Blueprintable)
class UFSDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDGameplayStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecalData(const UObject* WorldContextObject, const FVector& Location, const FVector& upVector, const FDecalData& DecalData, bool randomRollRotation);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& upVector, float Size, float Duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetControllerVibrationSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetControllerSpeakerSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
};

