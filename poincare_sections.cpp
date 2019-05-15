#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void EulerCromer(float F_D, string filename);

int main() 
{
    EulerCromer(1.4,"dat1.dat");
    EulerCromer(1.44,"dat2.dat");
    EulerCromer(1.465,"dat3.dat");
    return 0;
}

void EulerCromer(float F_D, string filename){
    
}