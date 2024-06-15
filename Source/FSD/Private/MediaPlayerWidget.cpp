#include "MediaPlayerWidget.h"

UMediaPlayerWidget::UMediaPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerState = EMediaPlayerState::Stopped;
    this->OutputImage = NULL;
}

void UMediaPlayerWidget::Stop() {
}


void UMediaPlayerWidget::PlaySource(UFileMediaSource* InSource) {
}

void UMediaPlayerWidget::PlaySoftSource(TSoftObjectPtr<UFileMediaSource> InSource) {
}

void UMediaPlayerWidget::Play() {
}

void UMediaPlayerWidget::Callback_MediaPlayResumed() {
}

void UMediaPlayerWidget::Callback_MediaOpened(const FString& URL) {
}

void UMediaPlayerWidget::Callback_MediaEndReached() {
}

void UMediaPlayerWidget::Callback_MediaClosed() {
}


