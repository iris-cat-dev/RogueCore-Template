#include "FSDCloudSaveClient.h"

UFSDCloudSaveClient::UFSDCloudSaveClient() {
}

bool UFSDCloudSaveClient::SaveToCloud(UFSDSaveGame* SaveGame) {
    return false;
}

bool UFSDCloudSaveClient::DownloadMetadata() {
    return false;
}

bool UFSDCloudSaveClient::DownloadLatest() {
    return false;
}

bool UFSDCloudSaveClient::DownloadBackupVersion(int64 Generation) {
    return false;
}


