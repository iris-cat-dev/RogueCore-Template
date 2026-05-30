#include "ParsedRunHistoryEntry.h"

FParsedRunHistoryEntry::FParsedRunHistoryEntry() {
    this->RunInfo = FParsedRunHistoryRunInfo();
    this->SharedInfo = FSharedRunData();
}

