#include <iostream>
#include <bitset>
#include "tables.h"
#include "types.h"

using namespace std;

int main(int argc, char *argv[]) {
 
    int loop = 8;
    for(int i = 0; i < loop; i++)
    {   
        cout << "Clear file " << i << ": ";
        cout << std::bitset<64>(Tables::CLEAR_FILE[i]) << endl;

    }
    return 0;
}