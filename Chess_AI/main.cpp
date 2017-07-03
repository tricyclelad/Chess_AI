#include <iostream>
#include <bitset>
#include "tables.h"
#include "types.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << std::bitset<64>(Tables::MASK_FILE[RANK_1]) << endl;
	return 0;
}