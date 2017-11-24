#include <iostream>
#include <cmath>
#include <valarray>

using namespace std;

int add(int c, int d);
int add2(int &c, int &d);

int main()
{
    int input;
     cout << "how many inputs?" << endl;
     cin >> input;
     int a[input];
     for(int i = 0; i<input; i++){
        cout << "enter number \n" ;
        cin >> a[i];
        //system("pause");
     }
     int sum = 0;
     for(int i = 0; i<input; i++){
        sum += a[i];
     }

     cout << "the sum is " << sum << endl;

     // cout<<sizeof(int)<<" "<<sizeof(double) <<" "<<sizeof(float) << " " << sizeof(bool);

    // Exercise 18.2
    int num1, num2;
    cout << "Enter two integers \n";
    cin >> num1 >> num2;
    for(int i=num1+1; i<num2; i++){
        cout << pow(i,2) << endl;
    }

    // Exercise 18.3
    int num_fact;
    cout << "Enter an integer";
    cin >> num_fact;
    int fact = num_fact;
    if (num_fact == 0)
        cout << "The factorial is " << 1 << endl;
    else
    {for(int i = num_fact-1; i>0; i--){
        fact = fact*i;
        }
        cout << "The factorial is " << fact << endl;
    }

    // Exercise 19.2
    int c=1;
    int d=2;
    cout << c << " " << d << endl;
    cout << add(c,d) << endl;
    cout << c << " " << d << endl;

    cout << c << " " << d << endl;
    cout << add2(c,d) << endl;
    cout << c << " " << d << endl;

    return 0;
}

int add(int c, int d){
c = c+d;
return c;
}

int add2(int &c, int &d){
c = c+d;
return c;
}

