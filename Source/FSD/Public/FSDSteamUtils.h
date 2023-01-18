#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESteamBranch.h"
#include "FSDSteamUtils.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class UFSDSteamUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDSteamUtils();
    UFUNCTION(BlueprintCallable)
    static bool PlayerIsFollowingUsOnSteam();
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInSteamBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTextFilteringInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDev(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeFilterText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSupporterUpgrade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDeluxeEdition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasContentCreatorEdition();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamRegion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamLanguage();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamBranchString();
    
    UFUNCTION(BlueprintCallable)
    static ESteamBranch GetSteamBranch();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerSteamName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerSteamID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FilterProfanityText(const FString& inputMessage);
    
};

