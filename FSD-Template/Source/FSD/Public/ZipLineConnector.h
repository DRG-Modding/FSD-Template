#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineConnector.generated.h"

class APlayerCharacter;

UCLASS(Abstract)
class AZipLineConnector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZipLineLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZipLineDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bSpeeding;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    
    AZipLineConnector();
};

