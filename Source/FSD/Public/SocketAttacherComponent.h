#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SocketAttacherComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USocketAttacherComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSocketAttachments;
    
public:
    USocketAttacherComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DetachFromSocket();
    
    UFUNCTION(BlueprintCallable)
    bool AttachToSocket(AActor* aTarget, FName SocketName, bool ShouldAttach);
    
};

