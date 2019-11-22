#include <iostream>
#include <cmath>
using namespace std;
int deci(int);
void oct(int);
void hexa(int);

int main()
{
    int num,sel=1;
    do{
    cout<<"Enter Binary number:\n";
    cin>>num;;
    oct(deci(num));
    cout<<"The number in decimal: "<<deci(num)<<endl;
    hexa(deci(num));
    cout<<"Enter 0 to exit and any to convert another number:\n";
    cin>>sel;
    }while(sel!=0);

    return 0;
}

int deci(int x){
    int deci = 0, i = 0;
    while (x!=0)
    {
        deci += (x%10)*pow(2,i);
        x /= 10;
        ++i;
    }
    return deci;
}

void oct(int x){
    int oct=0,i=1;
    while (x != 0)
        {
            oct += (x % 8) * i;
            x /= 8;
            i *= 10;
        }
    cout<<"The number is octal: "<<oct<<endl;
}

void hexa(int x){
    int y,i=1,j=0;
    char hexa[1000];
    cout<<"The value in hexadecimal: ";
            while(x!=0){
            y=(x%16);
            if(y>9){
                hexa[j]=y+55;
            }
            else{
                hexa[j]=y+48;
            }
            x/=16;
            j++;
            }
            for(int k=j-1;k>=0;k--){
                cout<<hexa[k];
            }
            cout<<endl;
}
