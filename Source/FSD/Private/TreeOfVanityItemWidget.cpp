#include "TreeOfVanityItemWidget.h"

UTreeOfVanityItemWidget::UTreeOfVanityItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Reward = NULL;
    this->actualReward = NULL;
    this->bIsPrimaryReward = false;
    this->bIsStartingNode = false;
    this->NodeID = -1;
    this->bIsClickable = false;
    this->DefaultReward = NULL;
    this->bIsBought = false;
}

void UTreeOfVanityItemWidget::SetIsBought(bool inIsBought) {
}

void UTreeOfVanityItemWidget::SetData(UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<UTreeOfVanityItemWidget*> inConnectedNodes, int32 inNodeID) {
}


bool UTreeOfVanityItemWidget::GetIsBought() {
    return false;
}


