#include "ItemsBarIcon.h"




UItemsBarIcon::UItemsBarIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->Selected = false;
    this->ItemBar = NULL;
    this->Character = NULL;
    this->Item = NULL;
    this->Index = 0;
}

