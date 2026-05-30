#include "FSDChatMessage.h"

FFSDChatMessage::FFSDChatMessage() {
    this->MsgType = EChatMessageType::ES_Chat;
    this->SenderType = EChatSenderType::NormalUser;
    this->Sender = FString();
    this->Msg = FString();
    this->SenderNetID = FUniqueNetIdRepl();
}

