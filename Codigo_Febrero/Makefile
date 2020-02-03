CFLAGS = -c

Main.exe: main.o
	$(CXX) main.o -o Main.exe

main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp agenda.cpp baseDeDatos.cpp contacto.cpp

clean: 
	$(RM) *.o main core

	
