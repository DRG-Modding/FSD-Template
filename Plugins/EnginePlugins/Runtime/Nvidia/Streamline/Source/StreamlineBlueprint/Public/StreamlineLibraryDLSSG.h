#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UStreamlineDLSSGMode.h"
#include "UStreamlineFeatureSupport.h"
#include "StreamlineLibraryDLSSG.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDLSSG();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineFeatureSupport QueryDLSSGSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineDLSSGMode GetDLSSGMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineDLSSGMode GetDefaultDLSSGMode();
    
};

