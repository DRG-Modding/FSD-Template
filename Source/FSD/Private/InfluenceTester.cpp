#include "InfluenceTester.h"
#include "Components/SphereComponent.h"

AInfluenceTester::AInfluenceTester() {
    this->Influencer = NULL;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
}

