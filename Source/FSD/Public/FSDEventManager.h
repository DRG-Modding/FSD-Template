#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BackendNotificationEvent.h"
#include "FSDEventActivateChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "FSDEventManager.generated.h"

class UFSDEvent;

UCLASS(BlueprintType)
class UFSDEventManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDEventsRefreshDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFSDEventsRefreshDelegate OnFSDEventsRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnEventActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> PendingActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool BackendDataValid;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float NextCheckTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime SeasonExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool SeasonExpirationTimeValid;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool BackendNotificationEventValid;
    
public:
    UFSDEventManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive(const UFSDEvent* FSDEvent) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBackendNotificationEvent(FBackendNotificationEvent& Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventHandlers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FSDEventsReady() const;
    
};

