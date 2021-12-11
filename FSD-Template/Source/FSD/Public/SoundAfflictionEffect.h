#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "SoundAfflictionEffect.generated.h"

class USoundCue;

UCLASS()
class USoundAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* BeginSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* EndSound;
    
    UPROPERTY(VisibleAnywhere)
    bool Attach;
    
    UPROPERTY(VisibleAnywhere)
    FName AttachBone;
    
    UPROPERTY(EditAnywhere)
    float FadeOnLoopEndDuration;
    
public:
    USoundAfflictionEffect();
};

