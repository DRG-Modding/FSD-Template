#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BackendNotificationEvent.h"
#include "EHolidayType.h"
#include "FSDEventActivateChangedDelegate.h"
#include "JettyBootEventSettings.h"
#include "OnRequestSeasonEndTimeCompleteDelegate.h"
#include "FSDEventManager.generated.h"

class UFSDEvent;

UCLASS(Blueprintable)
class UFSDEventManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDEventsRefreshDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventsRefreshDelegate OnFSDEventsRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnEventActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> PendingActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BackendDataValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime SeasonExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SeasonExpirationTimeValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BackendNotificationEventValid;
    
public:
    UFSDEventManager();
    UFUNCTION(BlueprintCallable)
    void TryGetJettyBootSettings(bool& OutHasSettings, FJettyBootEventSettings& OutSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestSeasonEndTime(FOnRequestSeasonEndTimeComplete OnComplete);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventTypeActive(const EHolidayType FSDEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive(const UFSDEvent* FSDEvent) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSeasonExpiryDate(FDateTime& ExpiryDate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHolidayType GetHolidayType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDEvent* GetFirstActiveEventHandler() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBackendNotificationEvent(FBackendNotificationEvent& Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventHandlers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FSDEventsReady() const;
    
};

