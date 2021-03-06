#include <sstream>
#include <iostream>
#include <cstring>
#include <string>
#include <random>

using namespace std;

int main ()
{

int nr1, nr2,r1,n;
string r2;
cin>>n;
nr1=700000000;
nr2=799999999;
for(int i=0;i<n;i++){
r1=nr1+rand()*rand()%(nr2-nr1);
r2='0'+to_string(r1);
cout<<r2<<endl;}

/*int nr;
cout<<"Cate numere de telefon doresti sa generezi? ";
cin>>nr;
string numar_telefon;
random_device rd; // obtain a random number from hardware
mt19937 gen(rd()); // seed the generator
uniform_int_distribution<> distr(700000000, 799999999); // define the range
for(int i=0;i<nr;i++){
        numar_telefon='0'+to_string(distr(gen));
        cout<<i<<". "<<numar_telefon<<endl;
}*/


return 0;
}
