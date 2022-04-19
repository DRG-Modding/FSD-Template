#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialManager.generated.h"

class UFSDSaveGame;
class AFSDPlayerController;
class APlayerCharacter;
class UTutorialComponent;

UCLASS(Abstract)
class ATutorialManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetTutorialsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowTutorialsDebug;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTutorialComponent> ActiveTutorial;
    
public:
    ATutorialManager();
};

