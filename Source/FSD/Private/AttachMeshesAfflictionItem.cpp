#include "AttachMeshesAfflictionItem.h"

FAttachMeshesAfflictionItem::FAttachMeshesAfflictionItem() {
    this->SkeletalMesh = NULL;
    this->StaticMesh = NULL;
    this->Animation = NULL;
    this->Scale = 0.00f;
    this->AttachType = ECharacterMesh;
    this->LoopAnimation = false;
    this->RandomRotaiton = false;
    this->RandomScale = false;
    this->CastShadows = false;
}

