#include "TreeOfVanityItemWidget.h"

class UReward;
class UTreeOfVanityItemWidget;

void UTreeOfVanityItemWidget::SetIsBought(bool inIsBought) {
}

void UTreeOfVanityItemWidget::SetData(UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<UTreeOfVanityItemWidget*> inConnectedNodes, int32 inNodeID) {
}


bool UTreeOfVanityItemWidget::GetIsBought() {
    return false;
}

UTreeOfVanityItemWidget::UTreeOfVanityItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Reward = NULL;
    this->bIsPrimaryReward = false;
    this->bIsStartingNode = false;
    this->NodeID = -1;
    this->bIsClickable = false;
    this->DefaultReward = NULL;
    this->bIsBought = false;
}

