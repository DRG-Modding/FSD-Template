#include "ActorContextWidget.h"

class UPrimitiveComponent;

void UActorContextWidget::Update(UPrimitiveComponent* InContextPrimitive) {
}

void UActorContextWidget::Show(UPrimitiveComponent* InContextPrimitive) {
}




UActorContextWidget::UActorContextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContextActor = NULL;
    this->ContextPrimitive = NULL;
}

