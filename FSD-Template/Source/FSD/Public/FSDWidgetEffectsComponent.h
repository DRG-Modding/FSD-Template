#pragma once
#include "CoreMinimal.h"
#include "WidgetPing.h"
#include "WidgetFade.h"
#include "Components/ActorComponent.h"
#include "WidgetTextCounter.h"
#include "CustomCounter.h"
#include "WidgetMover.h"
#include "EPingType.h"
#include "EMoveType.h"
#include "UObject/NoExportTypes.h"
#include "FSDWidgetEffectsComponent.generated.h"

class UObject;
class UTextBlock;
class UWidget;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFSDWidgetEffectsComponentOnCount, float, Value, float, NormalizedTime);

UCLASS(BlueprintType)
class UFSDWidgetEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FWidgetPing> WidgetPings;
    
    UPROPERTY(Transient)
    TArray<FWidgetFade> WidgetFades;
    
    UPROPERTY(Transient)
    TArray<FWidgetTextCounter> WidgetTextCounters;
    
    UPROPERTY(Transient)
    TArray<FCustomCounter> CustomCounters;
    
    UPROPERTY(Transient)
    TArray<FWidgetMover> WidgetMovers;
    
public:
    UFUNCTION(BlueprintCallable)
    static void StartTextCounter(UObject* WorldContext, UPARAM(Ref) UTextBlock*& Widget, float Start, float End, float Duration, int32 MaxDigits, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float Duration, const FFSDWidgetEffectsComponentOnCount& OnCount, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float Duration, EPingType PingType, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, EMoveType MoveType, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
    
    UFSDWidgetEffectsComponent();
};

