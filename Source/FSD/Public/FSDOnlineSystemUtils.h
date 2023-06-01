#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBlueprintablePrivilegeResults.h"
#include "EBlueprintableUserPrivileges.h"
#include "EInviteBlockReason.h"
#include "OnGetIsUpdatePendingBPDelegate.h"
#include "OnGetUserPrivilegeCompleteBPDelegateDelegate.h"
#include "OnProfileUIClosedBPDelegate.h"
#include "OnShowWebUrlClosedBPDelegate.h"
#include "FSDOnlineSystemUtils.generated.h"

class APlayerState;
class UFSDGameInstance;
class UObject;

UCLASS(Blueprintable)
class UFSDOnlineSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDOnlineSystemUtils();
    UFUNCTION(BlueprintCallable)
    static void TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintCallable)
    static void ShowUpgradeAccountUI();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountPicker(UFSDGameInstance* gInstance, const int32 GamePlayerID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInOverlay(const FString& URL, FOnShowWebUrlClosedBP OnOverlayClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileWithEvent(APlayerState* Requestor, APlayerState* Requestee, FOnProfileUIClosedBP OnProfileWindowClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileByUserId(APlayerState* Requestor, const FString& RequesteeUserID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsUpdatePending(const FOnGetIsUpdatePendingBP& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FOnGetUserPrivilegeCompleteBPDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
    
};

