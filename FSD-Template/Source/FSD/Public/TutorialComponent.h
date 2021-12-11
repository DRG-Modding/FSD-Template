#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TutorialComponent.generated.h"

class APlayerCharacter;
class AFSDPlayerState;
class ATutorialManager;
class AFSDPlayerController;
class UFSDSaveGame;

UCLASS(Abstract, Blueprintable)
class UTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTutorialEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float MaxDuration;
    
    UPROPERTY(EditAnywhere)
    int32 MaxViewCount;
    
    UPROPERTY(EditAnywhere)
    bool ShowInTutorialLevel;
    
    UPROPERTY(EditAnywhere)
    bool bAutoRegisterWithManager;
    
    UPROPERTY(EditAnywhere)
    bool bDebugAlwaysShow;
    
    UPROPERTY(EditAnywhere)
    bool ManuallyMarkViews;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialInitialized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialReady;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialActive;
    
public:
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
    
public:
    UTutorialComponent();
};

