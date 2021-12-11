#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkinEffect.generated.h"

class UMeshComponent;
class AActor;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class FSD_API USkinEffect : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson) const;
    
    USkinEffect();
};

