#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineConnector.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class AZipLineConnector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ZipLineLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ZipLineDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpeeding;
    
    AZipLineConnector();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    
};

