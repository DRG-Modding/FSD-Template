#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TetherMessageSettings.h"
#include "ETetherMessageDirection.h"
#include "ETetherConnectionMode.h"
#include "UObject/NoExportTypes.h"
#include "TetherComponent.generated.h"

class UTetherComponent;
class UMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnPowerChanged, bool, hasPower);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnConnectionRangeUpdated, float, range);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTetherComponentOnConnectionChanged, UTetherComponent*, frontConnection, UTetherComponent*, backConnection);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnTetherMessage, const FName&, Message);

UCLASS(BlueprintType)
class FSD_API UTetherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnPowerChanged OnPowerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnConnectionChanged OnConnectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnTetherMessage OnTetherMessage;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnConnectionRangeUpdated OnConnectionRangeUpdated;
    
protected:
    UPROPERTY(Export, Transient)
    UMeshComponent* TetherMesh;
    
    UPROPERTY(EditAnywhere)
    bool AutoSetup;
    
    UPROPERTY(Export, Transient)
    TArray<UTetherComponent*> ConnectionHistory;
    
    UPROPERTY(EditAnywhere)
    FName ConnectionPointName;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ForwardConnection)
    UTetherComponent* ForwardConnection;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_BackConnection)
    UTetherComponent* backConnection;
    
    UPROPERTY(EditAnywhere)
    float ConnectionDistance;
    
    UPROPERTY(EditAnywhere)
    ETetherConnectionMode ConnectionMode;
    
    UPROPERTY(EditAnywhere)
    int32 ConnectionPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConnectionHistorySize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool GeneratesPower;
    
    UPROPERTY(EditAnywhere)
    bool PeriodicConnectionValidation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HasPower)
    bool hasPower;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleConnectionValidation(bool Enabled, bool reactivate);
    
    UFUNCTION(BlueprintCallable)
    void StopLoSTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartLoSTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetupConnectionpoint(UMeshComponent* Mesh, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectionRange(float range);
    
    UFUNCTION(BlueprintCallable)
    void ResetConnectionHistory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HasPower();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ForwardConnection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BackConnection();
    
public:
    UFUNCTION(BlueprintCallable)
    void MessageTetherLine(const FName& Message, float Delay, ETetherMessageDirection messageDirection);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MessageBody(const FTetherMessageSettings& Message);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartOfLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndOfLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetTetherlineEnd(bool front);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasPower() const;
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetForwardConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConnectionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetConnectionPoint() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTetherComponent*> GetConnectionHistory();
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetBackConnection();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisconnectFromTetherLine(bool Deactivate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ConnectToTetherLine();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTetherComponent();
};

