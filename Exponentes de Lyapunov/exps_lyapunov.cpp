#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void EulerCromer_Dtheta(float F_D,float theta1, float theta2, string filename);

int main() 
{
    float F=0.5;
    EulerCromer_Dtheta(F,0.1,0.2,"dat1.dat");
    EulerCromer_Dtheta(F,0.2,0.3,"dat2.dat");
    EulerCromer_Dtheta(F,0.3,0.4,"dat3.dat");
    F=1.2;
    EulerCromer_Dtheta(F,0.1,0.2,"c_dat1.dat");
    EulerCromer_Dtheta(F,0.2,0.3,"c_dat2.dat");
    EulerCromer_Dtheta(F,0.3,0.4,"c_dat3.dat");
    return 0;
}

void EulerCromer_Dtheta(float F_D,float theta01, float theta02, string filename){
    
    
    ofstream outfile;
    outfile.open(filename);
    /*
    condiciones iniciales
    */
   double w1=0, w2=0, theta1=theta01, theta2=theta02, t=0;
    int n_puntos=5000;
    double g=0.5,w_D=2.0/3.0, dt=(2*M_PI/w_D)*(1.0/600);

    for (int i=0; i<n_puntos;i++){
        
        outfile << t <<" "<< log10(abs(theta1-theta2)) << endl;

        //siguiente paso
        w1=w1-(sin(theta1)+g*w1-F_D*sin(w_D*t))*dt;
        w2=w2-(sin(theta2)+g*w2-F_D*sin(w_D*t))*dt;
        theta1=theta1+w1*dt;
        theta2=theta2+w2*dt;
        t+=dt;

        //limitar el angulo
        while (theta1<M_PI){
            theta1+=2*M_PI;
        }
        while (theta1>M_PI){
            theta1-=2*M_PI;
        }
        while (theta2<M_PI){
            theta2+=2*M_PI;
        }
        while (theta2>M_PI){
            theta2-=2*M_PI;
        }
    }
    
    outfile.close();
}