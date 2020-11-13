//num_test.cpp -- use numeric test  in for loop

#include <iostream>
int main()
{
    using  namespace std;
    cout  <<  "Enter the string countdown value:  ";
    int limit;
    cin >> limit;
    int i;
    for  (i = limit; i; i--) //quits when i is 0;
        cout << "i = " << i << "\n";
    return 0;
}
