#include<iostream>
using namespace std;
int main(){
    int your_age;
    cout << "Enter your age : ";
    cin >> your_age;
     float your_age_m = your_age / 12;
     double your_age_s = your_age / 7;
     double your_age_j = your_age / 365;
     double your_age_h = your_age_j / 24;
     cout << "your age is :" << your_age_m << endl;
     return 0;
}