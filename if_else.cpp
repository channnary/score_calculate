#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "To Check Grade Enter a Number: ";
    cin >> number;
    if (number < 0 || number > 100){
        cout<< "wrong No";
    }else if (number >= 0 && number < 40)
    {
        /* code */
        cout<< "Fail";
    }else if (number >= 40 && number < 59)
    {
        /* code */
        cout<< "D Grade";
    }else if (number >= 60 && number < 70)
    {
        /* code */
        cout<< "C Grade";
    }else if (number >= 71 && number < 79)
    {
        /* code */
        cout<< "B Grade";
    }else if (number >= 80 && number < 89)
    {
        /* code */
        cout<< "A Grade";
    }else if (number >= 90 && number <= 100)
    {
        cout<< "A+ Grade";
    }
    
    
    
      return 0;
}