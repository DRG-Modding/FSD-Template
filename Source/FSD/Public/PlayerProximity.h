#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerProximitySignatureDelegate.h"
#include "PlayerProximity.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPlayerProximity : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProximitySignature OnPlayerProximity;
    
    UPlayerProximity(const FObjectInitializer& ObjectInitializer);

};

