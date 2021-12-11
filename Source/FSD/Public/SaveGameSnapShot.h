#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveGameSnapShot.generated.h"

class UFSDSaveGame;
class APlayerCharacter;
class UResourceData;

USTRUCT(BlueprintType)
struct FSaveGameSnapShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsObsolete;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Credits;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<TSubclassOf<APlayerCharacter>, int32> CharacterLevels;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<TSubclassOf<UResourceData>, int32> Resources;
    
    FSD_API FSaveGameSnapShot();
};

