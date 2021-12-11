#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioFunctionLibrary.generated.h"

class USoundMix;
class USoundClass;
class UObject;

UCLASS(BlueprintType)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSoundClassVolume(USoundClass* SoundClass);
    
    UAudioFunctionLibrary();
};

