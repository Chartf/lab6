#include<iostream>
using namespace std;

int main(){

  int number;
  
  int odd = 0;
  int even = 0;
    
    while (number != 0 )
        {
          cout << "Enter an integer: ";
          cin >> number;
          if (number%2 == 0 && number != 0)
            {
            
            even++;
            }
          else if (number%2 != 0)
          
          
            {
            
            odd++;
            }
          
        }

        cout << "#Even numbers = " << even << endl ;

        cout << "#Odd numbers = " << odd << endl ;

    return 0;
}
