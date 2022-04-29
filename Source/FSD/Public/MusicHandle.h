#pragma once
#include "CoreMinimal.h"
#include "MusicHandle.generated.h"

USTRUCT(BlueprintType)
struct FMusicHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MusicHandle;
    
    FSD_API FMusicHandle();
};

FORCEINLINE uint32 GetTypeHash(const FMusicHandle) { return 0; }