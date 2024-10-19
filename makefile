run: bin/tazo
	./bin/tazo

bin/tazo: src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

assets/mesaje: bin/tazo
	./bin/tazo > assets/mesaje