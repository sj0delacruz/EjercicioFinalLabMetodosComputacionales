d1_dat1.dat d1_dat2.dat d1_dat3.dat d2_dat1.dat d2_dat2.dat d2_dat3.dat: poincare_sections.x
	./poincare_sections.x

poincare_sections.x: poincare_sections.cpp
	g++ poincare_sections.cpp -o poincare_sections.x

clean:
	rm -rf *.x *.dat *.png