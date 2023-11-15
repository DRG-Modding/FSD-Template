#include "ExampleActor.h"

AExampleActor::AExampleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Field = 0.00f;
}

void AExampleActor::Server_ExampleFunction_Implementation() {
}

void AExampleActor::Client_ExampleFunction_Implementation() {
}

void AExampleActor::All_ExampleFunction_Implementation() {
}


