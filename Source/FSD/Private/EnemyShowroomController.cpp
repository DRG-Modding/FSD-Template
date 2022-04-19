#include "EnemyShowroomController.h"

class UAnimSequenceBase;
class UObject;
class AEnemyShowroomItem;
class UEnemyShowroomController;


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}

UEnemyShowroomController::UEnemyShowroomController() {
    this->EnemyInstance = NULL;
}

