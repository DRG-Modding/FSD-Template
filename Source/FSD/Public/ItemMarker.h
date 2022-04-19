#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemMarker.generated.h"

UCLASS(Abstract)
class AItemMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bMarkerValid;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bMarkerVisible;
    
public:
    AItemMarker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerValidChanged(bool Valid);
    
};

