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
    /*
    condiciones iniciales
    */
   double w=0, theta=0.2, t=0;
    int n_puntos=600000;
    double g=0.5,w_D=2.0/3.0, dt=(2*M_PI/w_D)*(1000.0/n_puntos);

    for (int i=0; i<n_puntos;i++){
        
        //siguiente paso
        w=w-(sin(theta)+g*w-F_D*sin(w_D*t))*dt;
        theta=theta+w*dt;
        t+=dt;

        //limitar el angulo
        while (theta<M_PI){
            theta+=2*M_PI;
        }
        while (theta>M_PI){
            theta-=2*M_PI;
        }
    }
}