#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FadeData.h"
#include "FadingDoneDelegate.h"
#include "FadeScreenSubSystem.generated.h"

class UObject;
class UTexture;

UCLASS(Abstract, Blueprintable)
class FSD_API UFadeScreenSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadingDone OnFadeInComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeData Fading;
    
public:
    UFadeScreenSubSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFadingToBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFadingFromBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsScreenFading(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFadeAmount() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* LoadingImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
    
};

