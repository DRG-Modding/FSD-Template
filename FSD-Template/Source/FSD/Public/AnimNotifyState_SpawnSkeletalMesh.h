#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_SpawnSkeletalMesh.generated.h"

class UAnimSequenceBase;
class USkeletalMesh;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_SpawnSkeletalMesh : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* AnimationToPlay;
    
    UPROPERTY(EditAnywhere)
    bool UseFirstPersonComponent;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector ScaleOverride;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UAnimNotifyState_SpawnSkeletalMesh();
};

