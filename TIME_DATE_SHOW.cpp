#include "includes.h"
#pragma warning(disable : 4996)

void TIME_DATE() {


    time_t now = time(0);
    srand(time(0));
    char* dt = ctime(&now);
    cout << dt << "(" << rand() << ")" << "\n\n";

}