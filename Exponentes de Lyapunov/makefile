all: exps_lyapunov_caos.png exps_lyapunov_estable.png

exps_lyapunov_caos.png exps_lyapunov_estable.png: dat1.dat dat2.dat dat3.dat c_dat1.dat c_dat2.dat c_dat3.dat graf_exps_lyapunov.py
	python3 graf_exps_lyapunov.py

dat1.dat dat2.dat dat3.dat c_dat1.dat c_dat2.dat c_dat3.dat: exps_lyapunov.x
	./exps_lyapunov.x

exps_lyapunov.x: exps_lyapunov.cpp
	g++ exps_lyapunov.cpp -o exps_lyapunov.x

clean:
	rm -rf *.x *.dat *.png
