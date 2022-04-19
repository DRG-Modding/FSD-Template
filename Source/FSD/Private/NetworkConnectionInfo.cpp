#include "NetworkConnectionInfo.h"

FNetworkConnectionInfo::FNetworkConnectionInfo() {
    this->PlayerController = NULL;
    this->PacketLossIn = 0.00f;
    this->PacketLossOut = 0.00f;
    this->Ping = 0.00f;
    this->Jitter = 0.00f;
    this->IsValid = false;
}

