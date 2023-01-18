#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AsyncPathRequestsInterface.h"
#include "FSDAIController.h"
#include "EscortMuleAIController.generated.h"

class UEscortObjective;

UCLASS(Blueprintable)
class AEscortMuleAIController : public AFSDAIController, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GaragePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEscortObjective* EscortObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TunnelStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TunnelEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    AEscortMuleAIController();
    UFUNCTION(BlueprintCallable)
    void SetDozerNextPathSegment();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPathComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetPointBehindEscortMule(float Distance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPathForDebug(int32 Segment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathEndTagent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFullPath(TArray<FVector>& outPath) const;
    
    UFUNCTION(BlueprintCallable)
    void FindDozerPath(FVector StartPosition);
    
    
    // Fix for true pure virtual functions not being implemented
};

