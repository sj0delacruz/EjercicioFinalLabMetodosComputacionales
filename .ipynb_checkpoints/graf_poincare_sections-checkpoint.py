import numpy as np

F_D=[1.4,1.44,1.465]
for i in range(3):
    dat1 = np.loadtxt("d1_dat"+str(i+1)+".dat")
    x,y,w=dat1[:,0],dat1[:,1],dat1[:,2]
    dat2 = np.loadtxt("d2_dat"+str(i+1)+".dat")
    x,y,w=dat1[:,0],dat1[:,1],dat1[:,2]
    y1,w1=dat2[:,0],dat2[:,1]