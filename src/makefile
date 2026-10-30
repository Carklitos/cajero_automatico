CXX = g++
CXXFLAGS = -std=c++17 -Wall

main: main.o account.o menu.o
	$(CXX) $(CXXFLAGS) -o main main.o account.o menu.o

main.o: main.cc menu.h account.h
	$(CXX) $(CXXFLAGS) -c main.cc

menu.o: menu.cc menu.h
	$(CXX) $(CXXFLAGS) -c menu.cc

account.o: account.cc account.h
	$(CXX) $(CXXFLAGS) -c account.cc

clean:
	rm -f *.o main
