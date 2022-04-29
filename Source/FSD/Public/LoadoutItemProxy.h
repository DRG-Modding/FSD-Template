#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "ItemLoadoutAnimations.h"
#include "LoadoutItemProxy.generated.h"

class UItemCharacterAnimationSet;
class AActor;

UCLASS(Blueprintable)
class ALoadoutItemProxy : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemLoadoutAnimations LoadoutAnimations;
    
public:
    ALoadoutItemProxy();
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AItem> GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass);
    
};

