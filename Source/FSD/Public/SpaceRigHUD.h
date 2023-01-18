#pragma once
#include "CoreMinimal.h"
#include "FSDHUD.h"
#include "NotificationEntry.h"
#include "SpaceRigHUD.generated.h"

class UObject;
class UWindowWidget;

UCLASS(Blueprintable, NonTransient)
class ASpaceRigHUD : public AFSDHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNotificationEntry> NotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotificationQueueActive;
    
public:
    ASpaceRigHUD();
    UFUNCTION(BlueprintCallable)
    void SetNotificationQueueActive(bool Inactive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotificationQueueActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotificationAdded();
    
public:
    UFUNCTION(BlueprintCallable)
    void QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotificationObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotificationQueueEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* DequeueNotificationObject();
    
};

