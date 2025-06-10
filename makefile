#makefile para cadastro
#cirado por marina 09/06/2025

PROG = cadastro.exe
CPP = clang++
CPPFLAGS = -O0 -g -Wall -pedantic -I"C:\Users\marin\OneDrive\Documentos\projetos c++\lp1\cadastro de func"
OBJS = cadastro.o desenvolvedor.o estagiario.o funcionario.o gerente.o

$(PROG) : $(OBJS)
	$(CPP) -o $(PROG) $(OBJS)

cadastro.o :
	$(CPP) $(CPPFLAGS) -c cadastro.cpp
desenvolvedor.o : desenvolvedor.hpp
	$(CPP) $(CPPFLAGS) -c desenvolvedor.cpp
estagiario.o : estagiario.hpp
	$(CPP) $(CPPFLAGS) -c estagiario.cpp
funcionario.o : funcionario.hpp
	$(CPP) $(CPPFLAGS) -c funcionario.cpp
gerente.o : gerente.hpp
	$(CPP) $(CPPFLAGS) -c gerente.cpp
clean:
	rm -f core $(PROG) $(OBJS)