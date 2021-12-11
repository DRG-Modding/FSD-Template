#include "EnemyShowroomController.h"

class UAnimSequenceBase;
class AEnemyShowroomItem;
class UObject;
class UEnemyShowroomController;


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}

UEnemyShowroomController::UEnemyShowroomController() {
    this->EnemyInstance = NULL;
}

