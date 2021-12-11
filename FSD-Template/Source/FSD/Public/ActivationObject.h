#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "ActivationObject.generated.h"

class USingleUsableComponent;
class APlayerCharacter;

UCLASS(Abstract)
class AActivationObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* Usable;
    
    UPROPERTY()
    bool HasBeenUsed;
    
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* User, EInputKeys Key);
    
public:
    AActivationObject();
};

