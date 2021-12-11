#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RejoinInt.h"
#include "RejoinFloat.h"
#include "PlayerRejoinState.generated.h"

UCLASS(BlueprintType)
class UPlayerRejoinState : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Reset();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
    
public:
    UPlayerRejoinState();
};

