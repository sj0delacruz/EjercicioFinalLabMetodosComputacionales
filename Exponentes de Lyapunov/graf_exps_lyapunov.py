# coding: utf-8
import numpy as np
import matplotlib.pyplot as plt

l=["","c_"]
ln=["estable","caos"]
thetas=["0.1","0.2","0.3","0.4"]
for i in range(2):
    plt.figure(figsize=(30,10))
    for j in range(3):
        dat1 = np.loadtxt(l[i]+"dat"+str(j+1)+".dat")
        x,y=dat1[:,0],dat1[:,1]
        plt.subplot(1,3,j+1)
        plt.plot(x,y,'ko-',ms=1,label=r'$\theta_1-\theta_1=$'+thetas[j]+'-'+thetas[j+1])
        #plt.xlim(1.35,1.5)
        #plt.ylim(1,3)
        plt.title(r'$\Delta \theta$ versus $tiempo$')
        plt.xlabel(r'$tiempo$')
        plt.ylabel(r'$\Delta \theta$ (radianes)')
        plt.legend()
    plt.savefig("exps_lyapunov_"+ln[i]+".png")
