run: bin/tazo
	./bin/tazo

run: bin/mem
	./bin/mem

bin/tazo: src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

bin/mem: src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/mem

assets/mesaje: bin/tazo
	./bin/tazo > assets/mesaje