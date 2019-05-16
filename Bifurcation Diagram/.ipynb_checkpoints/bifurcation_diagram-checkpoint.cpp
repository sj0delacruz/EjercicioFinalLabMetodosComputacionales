#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void bifurcation_diagram(float F_D0, float F_D1, string filename);


int main() 
{
    bifurcation_diagram(1.35,1.49,"dat1.dat");
    return 0;
}

void bifurcation_diagram(float F_D0, float F_D1, string filename){

    ofstream outfile;
	outfile.open(filename);
    
    float F_D=F_D0, dF_D=0.0005;
    while (F_D<F_D1){
        /*
        condiciones iniciales
        */
       double w=0, theta=0.2, t=0;
        int n_puntos=600000;
        double g=0.5,w_D=2.0/3.0, dt=(2*M_PI/w_D)*(1000.0/n_puntos);
    
        for (int i=0; i<n_puntos;i++){

            if(i>n_puntos*(1.0/2) && i%600==0){
                outfile << F_D <<" "<< theta << endl;
            }
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
        F_D+=dF_D;
    }
    outfile.close();

}