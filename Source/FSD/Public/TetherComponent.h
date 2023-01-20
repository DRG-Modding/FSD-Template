#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ETetherConnectionMode.h"
#include "ETetherMessageDirection.h"
#include "TeherMessage_DelegateDelegate.h"
#include "TetherConnectionChanged_DeletageDelegate.h"
#include "TetherMessageSettings.h"
#include "TetherPowerChanged_DelegateDelegate.h"
#include "TetherRangeChangedDelegate.h"
#include "TetherComponent.generated.h"

class UMeshComponent;
class UTetherComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTetherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherPowerChanged_Delegate OnPowerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherConnectionChanged_Deletage OnConnectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeherMessage_Delegate OnTetherMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherRangeChanged OnConnectionRangeUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* TetherMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTetherComponent*> ConnectionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectionPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_ForwardConnection, meta=(AllowPrivateAccess=true))
    UTetherComponent* ForwardConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_BackConnection, meta=(AllowPrivateAccess=true))
    UTetherComponent* backConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETetherConnectionMode ConnectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectionHistorySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GeneratesPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PeriodicConnectionValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasPower, meta=(AllowPrivateAccess=true))
    bool hasPower;
    
public:
    UTetherComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

