#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "ItemLoadoutAnimations.h"
#include "LoadoutItemProxy.generated.h"

class UItemCharacterAnimationSet;
class AActor;

UCLASS()
class ALoadoutItemProxy : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UItemCharacterAnimationSet* AnimationSet;
    
    UPROPERTY(EditAnywhere)
    FItemLoadoutAnimations LoadoutAnimations;
    
public:
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AItem> GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass);
    
    ALoadoutItemProxy();
};

