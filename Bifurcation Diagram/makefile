all: bifurcation_diagram.png

bifurcation_diagram.png: dat1.dat bifurcation_diagram.py
	python3 bifurcation_diagram.py

dat1.dat: bifurcation_diagram.x
	./bifurcation_diagram.x

bifurcation_diagram.x: bifurcation_diagram.cpp
	g++ bifurcation_diagram.cpp -o bifurcation_diagram.x

clean:
	rm -rf *.x *.dat *.png