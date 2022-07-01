#include "FSDWidgetBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UWidgetAnimation;
class AFSDPlayerState;
class UWidget;
class USizeBox;
class UVerticalBox;
class UPanelWidget;
class UUserWidget;
class UTextBlock;
class UImage;
class UWindowWidget;
class APlayerController;
class UFSDCheatManager;
class USpacer;
class UTexture2D;
class UHorizontalBox;
class UHorizontalBoxSlot;
class UUniformGridSlot;
class UVerticalBoxSlot;
class UUniformGridPanel;
class UCanvasPanel;
class UCanvasPanelSlot;

void UFSDWidgetBlueprintLibrary::ToggleAnimationLooping(UObject* WorldContext, UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool& OutPlayingChanged, bool& OutIsPlaying) {
}

bool UFSDWidgetBlueprintLibrary::TextSmallerThan(const FText& Text1, const FText& Text2) {
    return false;
}

bool UFSDWidgetBlueprintLibrary::TextGreaterThan(const FText& Text1, const FText& Text2) {
    return false;
}

TArray<UWidget*> UFSDWidgetBlueprintLibrary::SortWidgetArray(const TArray<UWidget*>& InWidgets, const UFSDWidgetBlueprintLibrary::FCompareWidgetsDelegate& InCompareFunction) {
    return TArray<UWidget*>();
}

void UFSDWidgetBlueprintLibrary::SimpleBox(FPaintContext& Context, FVector2D Position, FVector2D Size, FLinearColor Tint) {
}

FTimerHandle UFSDWidgetBlueprintLibrary::SetTimerForNextTick(UObject* WorldContext, const FTimerDynamicDelegate& TimerDelegate) {
    return FTimerHandle{};
}

void UFSDWidgetBlueprintLibrary::SetSizeBoxSettings(USizeBox*& InSizeBox, const FSizeBoxSettings& InSettings) {
}

void UFSDWidgetBlueprintLibrary::SetMousePosition(UObject* WorldContextObject, int32 X, int32 Y) {
}

void UFSDWidgetBlueprintLibrary::SetChildrenVisibility(UPanelWidget* Panel, ESlateVisibility Visibility, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter) {
}

void UFSDWidgetBlueprintLibrary::ScrubAnimation(UObject* WorldContext, UWidgetAnimation* InAnimation, float Progress01) {
}

void UFSDWidgetBlueprintLibrary::ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth) {
}

void UFSDWidgetBlueprintLibrary::ScaleImageToHeight(UImage* Image, float TargetHeight) {
}

void UFSDWidgetBlueprintLibrary::PrintStrings(UObject* WorldContextObject, const TArray<FString>& InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
}

FString UFSDWidgetBlueprintLibrary::MidIgnoringWhiteSpace(const FString& Source, int32 Index, int32 count) {
    return TEXT("");
}

FVector2D UFSDWidgetBlueprintLibrary::MeasureTextSize(const FText& Text, const FSlateFontInfo& Font) {
    return FVector2D{};
}

FVector2D UFSDWidgetBlueprintLibrary::MeasureTextBlockSize(const UTextBlock* TextBlock) {
    return FVector2D{};
}

void UFSDWidgetBlueprintLibrary::Line(FPaintContext& Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint) {
}

FLinearColor UFSDWidgetBlueprintLibrary::LerpColors(const TArray<FLinearColor>& Colors, bool Interpolate, float Progress01) {
    return FLinearColor{};
}

int32 UFSDWidgetBlueprintLibrary::LengthIgnoringWhitespace(const FString& Source) {
    return 0;
}

bool UFSDWidgetBlueprintLibrary::IsWindowsPlatform(UObject* WorldContextObject) {
    return false;
}

bool UFSDWidgetBlueprintLibrary::IsWhiteSpaceAt(const FString& Source, int32 Index) {
    return false;
}

bool UFSDWidgetBlueprintLibrary::IsWhiteSpace(const FString& Source) {
    return false;
}

bool UFSDWidgetBlueprintLibrary::IsHUDVisible(UObject* WorldContextObject) {
    return false;
}

FString UFSDWidgetBlueprintLibrary::IntToRomanNumeral(int32 Value) {
    return TEXT("");
}

bool UFSDWidgetBlueprintLibrary::HasAnyVisibleChildren(UPanelWidget* Panel, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter) {
    return false;
}

FString UFSDWidgetBlueprintLibrary::GetShortTimeString(int32 TotalSeconds, bool BlinkDelimiter) {
    return TEXT("");
}

UWindowWidget* UFSDWidgetBlueprintLibrary::GetParentWindowWidget(UUserWidget* InWidget) {
    return NULL;
}

UUserWidget* UFSDWidgetBlueprintLibrary::GetParentUserWidget(UUserWidget* InWidget) {
    return NULL;
}

AFSDPlayerState* UFSDWidgetBlueprintLibrary::GetOwningFSDPlayerState(UWidget* Target) {
    return NULL;
}

FText UFSDWidgetBlueprintLibrary::GetKeyName(const FKey& Key) {
    return FText::GetEmpty();
}

float UFSDWidgetBlueprintLibrary::GetFontMaxHeight(const FSlateFontInfo& Font) {
    return 0.0f;
}

float UFSDWidgetBlueprintLibrary::GetFontBaseline(const FSlateFontInfo& Font) {
    return 0.0f;
}

UWidget* UFSDWidgetBlueprintLibrary::GetFocusedWidget(UObject* WorldContextObject, APlayerController* Controller) {
    return NULL;
}

UUserWidget* UFSDWidgetBlueprintLibrary::GetFocusableParentUserWidget(UUserWidget* InWidget) {
    return NULL;
}

FVector2D UFSDWidgetBlueprintLibrary::GetDrawSize(FPaintContext& InContext) {
    return FVector2D{};
}

UFSDCheatManager* UFSDWidgetBlueprintLibrary::GetCheatManager(UObject* WorldContextObject) {
    return NULL;
}

UWidget* UFSDWidgetBlueprintLibrary::FindChildWidget(UPanelWidget*& ParentWidget, TSubclassOf<UUserWidget> WidgetClass, bool SearchChildren) {
    return NULL;
}

UVerticalBox* UFSDWidgetBlueprintLibrary::CreateVerticalBox(UObject* WorldContext) {
    return NULL;
}

UTextBlock* UFSDWidgetBlueprintLibrary::CreateTextBlock(UObject* WorldContext, FText Text, FSlateFontInfo Font, TEnumAsByte<ETextJustify::Type> Justification, FLinearColor Color, bool WrapText) {
    return NULL;
}

USpacer* UFSDWidgetBlueprintLibrary::CreateSpacer(UObject* WorldContext, FVector2D Size) {
    return NULL;
}

TArray<UUserWidget*> UFSDWidgetBlueprintLibrary::CreateOrReuseChildrenWithCallbackEx(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const UFSDWidgetBlueprintLibrary::FWidgetCreatedOrReusedDelegate& OnCreatedOrReused, const UFSDWidgetBlueprintLibrary::FWidgetDelegate& OnCollapsed) {
    return TArray<UUserWidget*>();
}

TArray<UUserWidget*> UFSDWidgetBlueprintLibrary::CreateOrReuseChildrenWithCallback(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const UFSDWidgetBlueprintLibrary::FWidgetCreatedOrReusedDelegate& OnCreatedOrReused) {
    return TArray<UUserWidget*>();
}

TArray<UUserWidget*> UFSDWidgetBlueprintLibrary::CreateOrReuseChildren(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass) {
    return TArray<UUserWidget*>();
}

UImage* UFSDWidgetBlueprintLibrary::CreateImageSized(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, FVector2D Size) {
    return NULL;
}

UImage* UFSDWidgetBlueprintLibrary::CreateImage(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, bool AutoSize) {
    return NULL;
}

UHorizontalBox* UFSDWidgetBlueprintLibrary::CreateHorizontalBox(UObject* WorldContext) {
    return NULL;
}

FText UFSDWidgetBlueprintLibrary::ClampTextLength(const FText& Text, int32 MaxLength, const FText& CutOffIndicator) {
    return FText::GetEmpty();
}

void UFSDWidgetBlueprintLibrary::Box(FPaintContext& Context, FVector2D Position, FVector2D Size, const FSlateBrush& Brush, FLinearColor Tint) {
}

UWidget* UFSDWidgetBlueprintLibrary::AddWidgetToRow(UVerticalBox* VerticalBox, UWidget* Widget, int32 MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutRow) {
    return NULL;
}

UWidget* UFSDWidgetBlueprintLibrary::AddChildToVerticalBoxEx(UVerticalBox* VerticalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UVerticalBoxSlot*& OutSlot, UVerticalBox*& OutVerticalBox) {
    return NULL;
}

UWidget* UFSDWidgetBlueprintLibrary::AddChildToUniformGridEx(UUniformGridPanel* GridPanel, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, int32 Column, int32 Row, UUniformGridSlot*& OutSlot, UUniformGridPanel*& OutGridPanel) {
    return NULL;
}

UWidget* UFSDWidgetBlueprintLibrary::AddChildToHorizontalBoxEx(UHorizontalBox* HorizontalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutHorizontalBox) {
    return NULL;
}

UWidget* UFSDWidgetBlueprintLibrary::AddChildToCanvasEx(UCanvasPanel* CanvasPanel, UWidget* Widget, FAnchors Anchors, FMargin Offsets, bool AutoSize, int32 Z_Order, UCanvasPanelSlot*& OutSlot, UCanvasPanel*& OutCanvasPanel) {
    return NULL;
}

UFSDWidgetBlueprintLibrary::UFSDWidgetBlueprintLibrary() {
}

