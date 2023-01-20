#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepPathFinderSize.h"
#include "DeepPathFinderType.h"
#include "PathfinderFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPathfinderFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPathfinderFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector SnapToGrid(UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType PathType, DeepPathFinderSize PathSize, float maxSnapDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPathfinderReady(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, const FVector& Origin, float atDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, const FVector& Origin, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector FindPointAlongPathTo(UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance);
    
};

