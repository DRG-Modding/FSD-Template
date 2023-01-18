#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "EnemyShowroomController.generated.h"

class AEnemyShowroomItem;
class UAnimSequenceBase;
class UEnemyShowroomController;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEnemyShowroomItem* EnemyInstance;
    
public:
    UEnemyShowroomController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_PlayAttack(UAnimSequenceBase* attackAnimation);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAttack(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEnemyShowroomController* DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor);
    
};

