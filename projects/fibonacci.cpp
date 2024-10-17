#include <iostream>
using namespace std;
int main(){
    int nthTerm;
    int n1 = 0;
    int n2 = 1;
    int n3;

    cout << "Input nth term: ";
    cin >> nthTerm;
    cout << n1 << " ";
    
    for (int i = 2; i <= nthTerm; i++){
        n3 = n1 + n2;
        n1 = n2;
        if (i == 3){
            n3 = 1;
        }
        n2 = n3;
        cout << n3 << " ";
    }
}