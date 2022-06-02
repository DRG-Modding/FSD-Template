#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoolDownProgressStyle.h"
#include "CoolDownProgressWidget.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCoolDownProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle Style;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> CoolDownObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
public:
    UCoolDownProgressWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitWidget();
    
    UFUNCTION(BlueprintCallable)
    void Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle);
    
};

