# Target to compile the object file
Factorial: Factorial.o
	g++ Factorial.o -o pay.exe

# Target to compile the C++ program
Factorial.o: Factorial.cpp
	g++ -c Factorial.cpp -o Factorial.o

# Target to run the program (interactively)
run: Factorial
	./pay.exe

# Target to compile the object Test file
FactorialTest: FactorialTest.o
	g++ FactorialTest.o -o FactorialTest.exe

# Target to compile the C++ Test program
FactorialTest.o: FactorialTest.cpp
	g++ -c FactorialTest.cpp -o FactorialTest.o

# Target to run the Test program
test: FactorialTest
	./FactorialTest.exe

# Target to clean up compiled files
clean:
	rm -f Factorial.o FactorialTest.o pay.exe FactorialTest.exe
