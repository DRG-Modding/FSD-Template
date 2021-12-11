#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotify_SpawnActor.generated.h"

class AActor;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_SpawnActor : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UAnimNotify_SpawnActor();
};

