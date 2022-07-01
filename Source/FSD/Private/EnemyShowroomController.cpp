#include "EnemyShowroomController.h"

class AEnemyShowroomItem;
class UAnimSequenceBase;
class UEnemyShowroomController;
class UObject;


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}

UEnemyShowroomController::UEnemyShowroomController() {
    this->EnemyInstance = NULL;
}

