#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TutorialComponent.generated.h"

class ATutorialManager;
class APlayerCharacter;
class AFSDPlayerState;
class AFSDPlayerController;
class UFSDSaveGame;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    void OnManagerReady(ATutorialManager* manager);
    
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

