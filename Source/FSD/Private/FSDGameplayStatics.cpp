#include "FSDGameplayStatics.h"

class UObject;
class UFXSystemComponent;
class UMaterialInterface;
class AActor;
class UDecalComponent;
class UAudioComponent;

UFXSystemComponent* UFSDGameplayStatics::SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy) {
    return NULL;
}

UDecalComponent* UFSDGameplayStatics::SpawnDecalData(const UObject* WorldContextObject, const FVector& Location, const FVector& upVector, const FDecalData& DecalData) {
    return NULL;
}

UDecalComponent* UFSDGameplayStatics::SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration) {
    return NULL;
}

UDecalComponent* UFSDGameplayStatics::SpawnDecal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& upVector, float Size, float Duration, float FadeDuration) {
    return NULL;
}

void UFSDGameplayStatics::SetControllerVibrationSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel) {
}

void UFSDGameplayStatics::SetControllerSpeakerSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel) {
}

UFSDGameplayStatics::UFSDGameplayStatics() {
}

