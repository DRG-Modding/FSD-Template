#pragma once
#include "CoreMinimal.h"
#include "RejoinInt.h"
#include "Components/ActorComponent.h"
#include "RejoinFloat.h"
#include "UObject/NoExportTypes.h"
#include "PlayerRejoinState.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UPlayerRejoinState : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerRejoinState();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Reset();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
    
};

