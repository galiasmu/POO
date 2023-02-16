#include <iostream>
using namespace std;

namespace enteros {
    int var1 = 5;
    int var2 = 7;
}
namespace decimales {
    float var1 = 5.14;
    float var2 = 7.14;
}

int main(int argc, char ** argv) {
    cout << enteros::var1 << "hola" << endl;
    cout << decimales::var1 << endl;
    return 0;
}
