#include "HackingToolWidget.h"

class UHackingUsableComponent;
class AHackingToolItem;

void UHackingToolWidget::StartHacking(UHackingUsableComponent* InHackingUsable, AHackingToolItem* InHackingTool) {
}

void UHackingToolWidget::RequestUnequipHackingTool() {
}




void UHackingToolWidget::HackingStageComplete(int32 InNextStage, int32 InTotalStages) {
}

void UHackingToolWidget::HackingComplete(bool InSuccess) {
}

UHackingToolWidget::UHackingToolWidget() : UUserWidget(FObjectInitializer::Get()) {
}

