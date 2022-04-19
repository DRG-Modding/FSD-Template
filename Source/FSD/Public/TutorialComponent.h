#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TutorialComponent.generated.h"

class AFSDPlayerState;
class APlayerCharacter;
class ATutorialManager;
class UFSDSaveGame;
class AFSDPlayerController;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class UTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxViewCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInTutorialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterWithManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAlwaysShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManuallyMarkViews;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialInitialized;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialReady;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialActive;
    
public:
    UTutorialComponent();
    UFUNCTION(BlueprintCallable)
    void RegisterTutorial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialsReset();
    
    UFUNCTION(BlueprintCallable)
    void OnManagerReady(ATutorialManager* Manager);
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialWatched();
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialReadyNow();
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialReadyInSeconds(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTutorialBeenShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetTutorialName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelTutorial(bool CountAsViewed);
    
};

