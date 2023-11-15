#include "ActorContextWidget.h"

UActorContextWidget::UActorContextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContextActor = NULL;
    this->ContextPrimitive = NULL;
}

void UActorContextWidget::Update(UPrimitiveComponent* InContextPrimitive) {
}

void UActorContextWidget::Show(UPrimitiveComponent* InContextPrimitive) {
}





