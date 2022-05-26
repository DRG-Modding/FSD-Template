#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathFinderType.h"
#include "DeepPathFinderSize.h"
#include "PathfinderFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPathfinderFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPathfinderFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector SnapToGrid(UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType PathType, DeepPathFinderSize PathSize, float maxSnapDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static bool IsPathfinderReady(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, const FVector& Origin, float atDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, const FVector& Origin, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector FindPointAlongPathTo(UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance);
    
};

