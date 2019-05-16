import numpy as np
import matplotlib.pyplot as plt

F_D=[1.4,1.44,1.465]
for i in range(3):
    dat1 = np.loadtxt("d1_dat"+str(i+1)+".dat")
    x,y,w=dat1[:,0],dat1[:,1],dat1[:,2]
    dat2 = np.loadtxt("d2_dat"+str(i+1)+".dat")
    x,y,w=dat1[:,0],dat1[:,1],dat1[:,2]
    y1,w1=dat2[:,0],dat2[:,1]
    
    plt.figure(figsize=(30,10))
    plt.subplot(1,3,1)
    p1,=plt.plot(x,y)
    plt.xlim(0,100)
    plt.title(r'$\theta$ versus tiempo')
    plt.legend([p1],[r'$F_D$ = %.3f'%F_D[i]],loc='best')
    plt.xlabel('tiempo (s)')
    plt.ylabel(r'$\theta$ (radianes)')

    plt.subplot(1,3,2)
    p2,=plt.plot(y,w,'go-',ms=2)
    plt.xlim(-3,3)
    plt.ylim(-np.pi,np.pi)
    plt.title(r'$\omega$ versus $\theta$')
    plt.legend([p2],[r'$F_D$ = %.3f'%F_D[i]],loc='best')
    plt.xlabel(r'$\theta$ (radianes)')
    plt.ylabel(r'$\omega$ (radianes/s)')

    plt.subplot(1,3,3)
    p2,=plt.plot(y1,w1,'bo',ms=2)
    plt.xlim(-3,3)
    plt.ylim(-np.pi,np.pi)
    plt.title(u'Seccion Poincaré' + '\n' + r'$\omega$ versus $\theta$')
    plt.legend([p2],[r'$F_D$ = %.3f'%F_D[i]],loc='best')
    plt.xlabel(r'$\theta$ (radianes)')
    plt.ylabel(r'$\omega$ (radianes/s)')
    plt.savefig("graf"+str(i+1)+".png")