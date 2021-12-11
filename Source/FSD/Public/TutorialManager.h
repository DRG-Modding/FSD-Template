#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialManager.generated.h"

class UTutorialComponent;
class AFSDPlayerController;
class APlayerCharacter;
class UFSDSaveGame;

UCLASS(Abstract)
class ATutorialManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinimumTimeBetweenTutorials;
    
    UPROPERTY(EditAnywhere)
    bool ResetTutorialsOnStart;
    
    UPROPERTY(EditAnywhere)
    bool ShowTutorialsDebug;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTutorialComponent> ActiveTutorial;
    
public:
    ATutorialManager();
};

