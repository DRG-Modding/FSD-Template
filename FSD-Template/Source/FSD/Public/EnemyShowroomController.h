#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "EnemyShowroomController.generated.h"

class UObject;
class AEnemyShowroomItem;
class UAnimSequenceBase;
class UEnemyShowroomController;

UCLASS(Blueprintable)
class UEnemyShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AEnemyShowroomItem* EnemyInstance;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PlayAttack(UAnimSequenceBase* attackAnimation);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAttack(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    static UEnemyShowroomController* DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor);
    
    UEnemyShowroomController();
};

