#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WidgetPing.h"
#include "WidgetFade.h"
#include "WidgetTextCounter.h"
#include "CustomCounter.h"
#include "WidgetMover.h"
#include "CustomCounterDelegateDelegate.h"
#include "EPingType.h"
#include "UObject/NoExportTypes.h"
#include "EMoveType.h"
#include "FSDWidgetEffectsComponent.generated.h"

class UUserWidget;
class UTextBlock;
class UObject;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDWidgetEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetPing> WidgetPings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetFade> WidgetFades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetTextCounter> WidgetTextCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCustomCounter> CustomCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMover> WidgetMovers;
    
public:
    UFSDWidgetEffectsComponent();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartTextCounter(UObject* WorldContext, UPARAM(Ref) UTextBlock*& Widget, float Start, float End, float Duration, int32 MaxDigits, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float Duration, const FCustomCounterDelegate& OnCount, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float Duration, EPingType PingType, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, EMoveType MoveType, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
    
};

