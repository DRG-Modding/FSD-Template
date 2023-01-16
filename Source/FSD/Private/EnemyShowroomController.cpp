#include "EnemyShowroomController.h"

class UObject;
class UEnemyShowroomController;
class AEnemyShowroomItem;
class UAnimSequenceBase;


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}

UEnemyShowroomController::UEnemyShowroomController() {
    this->EnemyInstance = NULL;
}

