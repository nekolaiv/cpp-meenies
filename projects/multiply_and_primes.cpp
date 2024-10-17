#include <iostream>
using namespace std;

int main(){

    int table_size, prime_count=0;

    // Get the table size
    while (true){
        cout<<"Multiplication Table Size: ";
        if (cin>>table_size) break;
        cin.clear(),cin.ignore(10000,'\n'),system("clear");
    }

    // Display Elements
    for (int i=1; i<=table_size; ++i){   
        for (int j=1; j<=table_size; ++j)
            cout<<i * j<<"\t";
        cout<<"\n\n";
    }

    // Count and Insert the Primes.
    int prime_numbers[table_size];
    for (int i=1; i<=table_size; ++i){
        prime_numbers[i-1]=0; int factor=2;
        for (int j=2; j<i; ++j)
            i % j==0 ? ++factor : factor;
        factor==2 ? prime_numbers[prime_count]=i,++prime_count : prime_count;
    }

    // Display the Number & Range of Prime Numbers
    cout<<"\n\nNumber of Prime Numbers: "<<prime_count<<"\n";
    cout<<"Prime Numbers:\n";
    for (int i=0; i<table_size; ++i)
        if (prime_numbers[i] != 0) cout<<prime_numbers[i]<<", ";

    // Prompt the User For Restarting the Program
    CHECKPOINT: char repeat;
    cout<<"\n\nAgain?[Y/N]: ", cin>>repeat;
    if (toupper(repeat)=='Y' || toupper(repeat)=='N')
        if (toupper(repeat)=='Y') system("clear"); return main();
        return 0;
    goto CHECKPOINT;
}