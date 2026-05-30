#include "TXNetworkFailure.h"

FTXNetworkFailure::FTXNetworkFailure() {
    this->is_host = false;
    this->connection_duration = 0.00f;
    this->error_type = FString();
    this->error_message = FString();
}

