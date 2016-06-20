#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;




int main() {

//    char data[] = "\x05\x01\x00\x02";
//     EB 47

    using namespace std::chrono;

    milliseconds start_time = duration_cast<milliseconds>(
            system_clock::now().time_since_epoch()
    );

    for (int a = 0; a < 1000000; a = a + 1) {
//        char data[] = {0x05, 0x01, 0x00, 0x02,  rand() % 100};
        char data[] = {0x05, 0x01, 0x00, 0x02};

        int crc = GetCrc16(data, sizeof data);
    }

//
//    char buffer [33];
//    sprintf(buffer,"%x", crc);
//    printf ("decimal: %s\n", buffer);
//    cout << crc << endl;

    milliseconds end_time = duration_cast<milliseconds>(
            system_clock::now().time_since_epoch()
    );

    cout << (end_time.count() - start_time.count()) << endl;

    return 0;
}