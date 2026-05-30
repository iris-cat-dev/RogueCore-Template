#include "FSDLocalizedChatMessage.h"

FFSDLocalizedChatMessage::FFSDLocalizedChatMessage() {
    this->MsgType = EChatMessageType::ES_Chat;
    this->Sender = FString();
    this->Msg = FText::GetEmpty();
}

