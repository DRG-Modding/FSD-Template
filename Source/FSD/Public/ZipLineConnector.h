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
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector ZipLineLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector ZipLineDirection;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bSpeeding;
    
    AZipLineConnector();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    
};

