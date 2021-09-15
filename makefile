all: compilar
compilar: detalleCriterio criterio acta archivo view main
		g++ -o Salida DetalleCriterio.o Criterio.o Acta.o Archivo.o View.o Main.o
detalleCriterio: DetalleCriterio.cpp DetalleCriterio.h
	g++ -c DetalleCriterio.cpp
criterio: Criterio.cpp Criterio.h
		g++ -c Criterio.cpp
acta: Acta.cpp Acta.h DetalleCriterio.h
	g++ -c Acta.cpp
archivo: Archivo.cpp Archivo.h Criterio.h Acta.h 
		g++ -c Archivo.cpp
view: View.cpp View.h Archivo.h
		g++ -c View.cpp
main: Main.cpp View.h 
	  g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o