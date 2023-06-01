#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EItemSkinType.h"
#include "SkinEffect.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API USkinEffect : public UObject {
    GENERATED_BODY()
public:
    USkinEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemSkinType GetSkinType() const;
    
};

