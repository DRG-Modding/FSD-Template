#pragma once
#include "CoreMinimal.h"
#include "SpaceRigNotification.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DelegateDelegate.h"
#include "CampaignNotificationSignatureDelegate.h"
#include "NotificationSubSystem.generated.h"

class UCampaignNotification;

UCLASS(Blueprintable)
class FSD_API UNotificationSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNewSpaceRigNotificationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignNotificationSignature OnCampaignNotification;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpaceRigNotification> SpaceRigNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

