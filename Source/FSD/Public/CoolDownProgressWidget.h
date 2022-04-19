#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoolDownProgressStyle.h"
#include "CoolDownProgressWidget.generated.h"

class UObject;

UCLASS(Abstract, EditInlineNew)
class UCoolDownProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle Style;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> CoolDownObject;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
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

