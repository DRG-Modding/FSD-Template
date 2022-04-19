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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BeginSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EndSound;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool Attach;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOnLoopEndDuration;
    
public:
    USoundAfflictionEffect();
};

