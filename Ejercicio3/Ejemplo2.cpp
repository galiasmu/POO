#include <iostream>
using namespace std;

namespace enteros2 {
    int var3 = 5;
    int var4 = 7;
}
namespace decimales2 {
    float var3 = 5.14;
    float var4 = 7.13;
}

int main1(int, char **) {
//    using enteros2::var3;
//    using decimales2::var4;
//    cout << var3 << endl;
//    cout << var4 << endl;
    cout << enteros2::var4 << "chau" <<  endl;
    cout << decimales2::var3 << endl;

    return 0;
}
