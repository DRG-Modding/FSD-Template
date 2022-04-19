#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerWaypoint.generated.h"

class APlayerCharacter;
class ALaserPointerItem;

UCLASS(Abstract)
class ALaserPointerWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALaserPointerItem> LaserPointer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    ALaserPointerWaypoint();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
};

