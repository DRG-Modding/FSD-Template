#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RadarPointRemovedSignatureDelegate.h"
#include "RadarPointComponent.generated.h"

class UUserWidget;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class URadarPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRadarPointRemovedSignature OnRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    URadarPointComponent();
    UFUNCTION(BlueprintCallable)
    static void MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha);
    
};

