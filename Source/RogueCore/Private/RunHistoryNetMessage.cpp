#include "RunHistoryNetMessage.h"

FRunHistoryNetMessage::FRunHistoryNetMessage() {
    this->Sender = nullptr;
    this->TargetState = nullptr;
    this->DataSent = 0;
    this->Type = ERunHistoryNetMessageDataType::DamageData;
}

