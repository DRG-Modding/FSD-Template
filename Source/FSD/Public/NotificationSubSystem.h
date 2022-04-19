#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CampaignNotificationSignatureDelegate.h"
#include "DelegateDelegate.h"
#include "SpaceRigNotification.h"
#include "NotificationSubSystem.generated.h"

class UCampaignNotification;

UCLASS(BlueprintType)
class FSD_API UNotificationSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate OnNewSpaceRigNotificationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCampaignNotificationSignature OnCampaignNotification;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpaceRigNotification> SpaceRigNotifications;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCampaignNotification* CampaignNotification;
    
public:
    UNotificationSubSystem();
    UFUNCTION(BlueprintCallable)
    bool GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification);
    
    UFUNCTION(BlueprintCallable)
    void ClearCampaignNotifications();
    
    UFUNCTION(BlueprintCallable)
    void AddSpaceRigNotification(FSpaceRigNotification NewNotification, const FString& ID, bool TriggerEvent);
    
};

