bool splitTime(int totalSeconds, int* hours, int* minutes, int* seconds) {
    if (totalSeconds < 0) {
        return false;
    }

    int h = totalSeconds / 3600;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    if (hours != nullptr) {
        *hours = h;
    }

    if (minutes != nullptr) {
        *minutes = m;
    }

    if (seconds != nullptr) {
        *seconds = s;
    }

    return true;
}

int* middleOf(int* a, int* b, int* c){

}
