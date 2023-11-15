#include "SpriteRectWidget.h"

USpriteRectWidget::USpriteRectWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void USpriteRectWidget::SetSize(FVector2D InSize) {
}

void USpriteRectWidget::SetPositionAndSize(FVector2D InPosition, FVector2D InSize) {
}

void USpriteRectWidget::SetPosition(FVector2D InPosition) {
}

void USpriteRectWidget::Move(FVector2D InOffset) {
}

FSpriteRect USpriteRectWidget::GetSpriteRect() const {
    return FSpriteRect{};
}


