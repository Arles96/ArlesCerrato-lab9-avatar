simulacion:	Bender.o Airbenders.o Earthbenders.o Firebenders.o Waterbenders.o main.o
	g++ Bender.o Airbenders.o Earthbenders.o Firebenders.o Waterbenders.o main.o -o simulacion

main.o:	Bender.h Airbenders.h Earthbenders.h Firebenders.h Waterbenders.h main.cpp
	g++ -c main.cpp

Bender.o: Bender.h Bender.cpp
	g++ -c Bender.cpp

Airbenders.o:	Bender.h Firebenders.h Airbenders.h Airbenders.cpp
	g++ -c Airbenders.cpp

Earthbenders.o:	Bender.h Airbenders.h Earthbenders.h Earthbenders.cpp
	g++ -c Earthbenders.cpp

Firebenders.o:	Bender.h Waterbenders.h Firebenders.h Firebenders.cpp
	g++ -c Firebenders.cpp

Waterbenders.o:	Bender.h Earthbenders.h Waterbenders.h Waterbenders.cpp
	g++ -c Waterbenders.cpp
