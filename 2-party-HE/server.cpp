#include <vector>
#include <chrono>
#include <iostream>
#include <string>
#include <typeinfo>

#include "../configs/config.h"
#include "../src/SEAL_Cipher.h"
#include "../src/pasta_3_plain.h"  // for PASTA_params
#include "../src/pasta_3_seal.h"
#include "../src/utils.h"
#include "../src/sealhelper.h"


int main() {
    print_example_banner("Performance and Communication Analysis for the Server in the 2-Party HE Setup");

    return 0;
}