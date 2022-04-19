#pragma once
#include "CoreMinimal.h"
#include "FSDHUD.h"
#include "SpaceRigHUD.generated.h"

class UDialogDataAsset;
class UObject;
class UWindowWidget;

UCLASS(NonTransient)
class ASpaceRigHUD : public AFSDHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> NotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bNotificationQueueActive;
    
public:
    ASpaceRigHUD();
    UFUNCTION(BlueprintCallable)
    void SetNotificationQueueActive(bool Inactive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotificationQueueActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotificationAdded(UObject* InNotification);
    
public:
    UFUNCTION(BlueprintCallable)
    UWindowWidget* QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType);
    
    UFUNCTION(BlueprintCallable)
    void QueueWindow(UWindowWidget* InWindow);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotificationObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void QueueMissionShout(TSoftObjectPtr<UDialogDataAsset> InShout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotificationQueueEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* DequeueNotificationObject();
    
};

