echo "Compiling C files..."
gcc -c rsa.c
echo "Compiling C++ files..."
g++ -c Main.cpp encrypt.cpp passgen.cpp usrman.cpp
echo "Linking..."
g++ -o PassMan rsa.o Main.o encrypt.o passgen.o usrman.o
echo "Removing Object Files"
rmdir rsa.o, Main.o, encrypt.o, passgen.o, usrman.o
echo "creating account files"
type accounts.json

echo "complete" 
