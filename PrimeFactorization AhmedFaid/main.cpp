#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <thread>

using namespace std;

void primeNumbers(vector<int> *primes){
    bool prime;
    primes->push_back(2);

    for(int i = 3; i < 1000000; i ++){
        prime = true;

        for (int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime)
            primes->push_back(i);
}
}

int primeFactors(int num){

    while (num%2 == 0){
        cout <<  2 << endl;
        num = num/2;
    }

    for (int i = 3; i <= (num); i=i+2){
        while (num%i == 0){
            cout << i << endl;
            num = num/i;
        }
    }
}

int main(){
    int num;
    vector<int> prime;
    thread t1 (&primeNumbers, &prime);

    t1.join();

    while(num != 0){
        cout << "enter number to factorize" << endl;
        cin >> num;
        primeFactors (num);
    }

    return 0;
}

/*    int num;

    cin >> num;
    primeFactors(num);
*/
