
# Target to compile the object file
ReverseString: ReverseString.o
	g++ ReverseString.o -o pay.exe

# Target to compile the C++ program
ReverseString.o: ReverseString.cpp
	g++ -c ReverseString.cpp -o ReverseString.o

# Target to run the program (interactively)
run: ReverseString
	./pay.exe

# Target to compile the object Test file
ReverseStringTest: ReverseStringTest.o
	g++ ReverseStringTest.o -o ReverseStringTest.exe

# Target to compile the C++ Test program
ReverseStringTest.o: ReverseStringTest.cpp
	g++ -c ReverseStringTest.cpp -o ReverseStringTest.o

# Target to run the Test program
test: ReverseStringTest
	./ReverseStringTest.exe

# Target to clean up compiled files
clean:
	rm -f ReverseString.o ReverseStringTest.o pay.exe ReverseStringTest.exe
