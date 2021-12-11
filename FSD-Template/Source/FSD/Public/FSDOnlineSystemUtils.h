#pragma once
#include "CoreMinimal.h"
#include "EBlueprintableUserPrivileges.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBlueprintablePrivilegeResults.h"
#include "EInviteBlockReason.h"
#include "FSDOnlineSystemUtils.generated.h"

class APlayerState;
class UObject;
class UFSDGameInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFSDOnlineSystemUtilsOnOverlayClosed, const FString&, LastURL);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFSDOnlineSystemUtilsDelegate, const APlayerState*, CheckedPlayerState, EBlueprintableUserPrivileges, CheckedPrivilege, EBlueprintablePrivilegeResults, PrivilegeResult);

UCLASS(BlueprintType)
class UFSDOnlineSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintCallable)
    static void ShowUpgradeAccountUI();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountPicker(UFSDGameInstance* gInstance, const int32 GamePlayerID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInOverlay(const FString& URL, FFSDOnlineSystemUtilsOnOverlayClosed OnOverlayClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileByUserId(APlayerState* Requestor, const FString& RequesteeUserID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FFSDOnlineSystemUtilsDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
    
    UFSDOnlineSystemUtils();
};

