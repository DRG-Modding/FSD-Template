#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RoomGeneratorGroupInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "RoomGeneratorGroup.generated.h"

class URoomGenerator;

UCLASS(Blueprintable)
class URoomGeneratorGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomGenerator*> Rooms;
    
    URoomGeneratorGroup();
    UFUNCTION(BlueprintCallable)
    static URoomGenerator* GetRandomRoomWithTags(UPARAM(Ref) FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    URoomGenerator* GetRandomRoom(UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomGeneratorGroupInstance CreateGroupInstance() const;
    
};

