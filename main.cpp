#include <iostream>
#include <string>

using namespace std;

void eja1sd999(int n){
    int s, p, r;
    string ejaDigit[10] = {"","One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
    string ejaDigitPuluhan[10] = {"","Ten ", "Twen", "Thir", "For", "Fif", "Six", "Seven", "Eight", "Nine"};
    string ejaDigitBelas[10] = {"","Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};

    s = n % 10;
    p = n / 10 % 10;
    r = n / 100 % 10;

    if(r > 0){
        cout << ejaDigit[r] << "Hundred ";
    }

    if(p == 1 && s > 0){
        cout << ejaDigitBelas[s];
    } else if (p > 0){
        if(p > 1){
            cout << ejaDigitPuluhan[p] << "ty ";
        } else {
            cout << ejaDigitPuluhan[1];
        }
        if (s > 0) cout << ejaDigit[s];
    } else if (s > 0){
       cout << ejaDigit[s];
    }
}

void eja(int n)
{
    int a, b, c;

    a = n / 1000000;
    b = n / 1000 % 1000;
    c = n % 1000;

    if (n > 999999){
        eja1sd999(a);
        cout << "Million ";
        eja1sd999(b);
        cout << "Thousand ";
        eja1sd999(c);
        cout << "Dollars ";
    } else if (n > 999) {
        eja1sd999(b);
        cout << "Thousand ";
        eja1sd999(c);
        cout << "Dollars ";
    } else {
        eja1sd999(c);
        cout << "Dollars ";
    }
}
int main()
{
    double n;

    do {
        cout << "Enter Ammount: ";
        cin >> n;
    } while (n < 1 || n > 999999999);

    eja(n);
    cout << endl;
    return 0;
}
