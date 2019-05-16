# coding: utf-8
import numpy as np
import matplotlib.pyplot as plt

dat1 = np.loadtxt("dat1.dat")
x,y=dat1[:,0],dat1[:,1]

plt.figure(figsize=(10,10))
plt.plot(x,y,'ko',ms=1)
plt.xlim(1.35,1.5)
plt.ylim(1,3)
plt.title('Bifurcation Diagram'+ '\n'+ r'$\theta$ versus $F_{D}$')
plt.xlabel(r'$F_D$')
plt.ylabel(r'$\theta$ (radianes)')
plt.savefig("bifurcation_diagram.png")
