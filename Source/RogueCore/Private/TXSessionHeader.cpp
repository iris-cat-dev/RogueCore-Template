#include "TXSessionHeader.h"

FTXSessionHeader::FTXSessionHeader() {
    this->sec = 0;
    this->stage_index = 0;
    this->player_count = 0;
    this->is_host = false;
    this->seconds_in_run = 0;
    this->gid = FString();
    this->bid = FString();
    this->pid = FString();
    this->uid = FString();
    this->build_type = FString();
    this->run_guid = FString();
}

