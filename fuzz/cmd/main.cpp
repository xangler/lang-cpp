#include "rapidfuzz/fuzz.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(void){
    string a = "mtxst";
    string b = "this is a test";
    auto alignment = rapidfuzz::fuzz::partial_ratio_alignment(a, b);
    cout << alignment.score << endl;
    cout << alignment.src_start << endl;
    cout << alignment.src_end << endl;
    cout << alignment.dest_start << endl;
    cout << alignment.dest_end << endl;
    return 0;
}
