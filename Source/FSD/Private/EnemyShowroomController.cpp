#include "EnemyShowroomController.h"

UEnemyShowroomController::UEnemyShowroomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyInstance = NULL;
}


void UEnemyShowroomController::PlayAttack(UAnimSequenceBase* Animation) {
}

UEnemyShowroomController* UEnemyShowroomController::DisplayEnemy(UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor) {
    return NULL;
}


