#include "SpriteRectLibrary.h"

FSpriteRect USpriteRectLibrary::TranslateSpriteRect(FSpriteRect Rect, FVector2D Offset) {
    return FSpriteRect{};
}

bool USpriteRectLibrary::SpriteRectIntersectsAny(FSpriteRect A, TArray<FSpriteRect> Others) {
    return false;
}

bool USpriteRectLibrary::SpriteRectIntersects(FSpriteRect A, FSpriteRect B) {
    return false;
}

void USpriteRectLibrary::MoveSpriteRect(FSpriteRect& Rect, FVector2D Offset) {
}

FSpriteRect USpriteRectLibrary::MakeSpriteRectFromPoints(FVector2D Start, FVector2D End) {
    return FSpriteRect{};
}

FSpriteRect USpriteRectLibrary::MakeSpriteRectFromCenter(FVector2D Center, FVector2D Size) {
    return FSpriteRect{};
}

void USpriteRectLibrary::MakeGateSpriteRects(int32 CanvasHeight, int32 GateWidth, FVector OpeningPos, float OpeningHeight, FSpriteRect& OutTopRect, FSpriteRect& OutBottomRect) {
}

FVector2D USpriteRectLibrary::GetSpriteRectSize(FSpriteRect Rect) {
    return FVector2D{};
}

FVector2D USpriteRectLibrary::GetSpriteRectCenter(FSpriteRect Rect) {
    return FVector2D{};
}

USpriteRectLibrary::USpriteRectLibrary() {
}

