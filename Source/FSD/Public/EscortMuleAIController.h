#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "UObject/NoExportTypes.h"
#include "AsyncPathRequestsInterface.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleAIController.generated.h"

class UEscortObjective;

UCLASS()
class AEscortMuleAIController : public AFSDAIController, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> GaragePath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UEscortObjective* EscortObj;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TunnelStartIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TunnelEndIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    AEscortMuleAIController();
    UFUNCTION(BlueprintCallable)
    void SetDozerNextPathSegment();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPathComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPathForDebug(int32 Segment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathEndTagent();
    
    UFUNCTION(BlueprintCallable)
    void FindDozerPath(FVector StartPosition);
    
    
    // Fix for true pure virtual functions not being implemented
};

