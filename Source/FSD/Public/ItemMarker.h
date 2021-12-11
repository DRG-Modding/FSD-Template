#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemMarker.generated.h"

UCLASS(Abstract)
class AItemMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMarkerValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMarkerVisible;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerValidChanged(bool Valid);
    
public:
    AItemMarker();
};

