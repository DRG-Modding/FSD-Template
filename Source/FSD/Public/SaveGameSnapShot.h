#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveGameSnapShot.generated.h"

class UResourceData;
class UFSDSaveGame;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FSaveGameSnapShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsObsolete;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Credits;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<APlayerCharacter>, int32> CharacterLevels;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UResourceData>, int32> Resources;
    
    FSD_API FSaveGameSnapShot();
};

