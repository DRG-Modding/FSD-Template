#include "FSDChatMessage.h"

FFSDChatMessage::FFSDChatMessage() {
    this->MsgType = EChatMessageType::ES_Chat;
    this->SenderType = EChatSenderType::NormalUser;
}

