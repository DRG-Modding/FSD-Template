#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerWaypoint.generated.h"

class ALaserPointerItem;
class APlayerCharacter;

UCLASS(Abstract)
class ALaserPointerWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ALaserPointerItem> LaserPointer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Normal;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
public:
    ALaserPointerWaypoint();
};

