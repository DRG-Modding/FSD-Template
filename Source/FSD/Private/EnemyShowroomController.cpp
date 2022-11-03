#include "EnemyShowroomController.h"

class UEnemyShowroomController;
class UAnimSequenceBase;
class UObject;
class AEnemyShowroomItem;


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}

UEnemyShowroomController::UEnemyShowroomController() {
    this->EnemyInstance = NULL;
}

