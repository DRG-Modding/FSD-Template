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
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* Usable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasBeenUsed;
    
public:
    AActivationObject();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* User, EInputKeys Key);
    
};

