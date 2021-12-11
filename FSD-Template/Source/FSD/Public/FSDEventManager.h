#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FSDEventManager.generated.h"

class UFSDEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDEventManagerOnFSDEventsRefresh);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventManagerOnEventActiveChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

UCLASS(BlueprintType)
class UFSDEventManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDEventManagerOnFSDEventsRefresh OnFSDEventsRefresh;
    
    UPROPERTY(BlueprintAssignable)
    FFSDEventManagerOnEventActiveChanged OnEventActiveChanged;
    
protected:
    UPROPERTY(Transient)
    TSet<FName> PendingActiveEvents;
    
    UPROPERTY(Transient)
    TSet<FName> ActiveEvents;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(Transient)
    bool BackendDataValid;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
    UPROPERTY(Transient)
    float NextCheckTime;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive(const UFSDEvent* FSDEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventHandlers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FSDEventsReady() const;
    
    UFSDEventManager();
};

