DIR = "examples"
main:
	g++ -I. src/omm.h src/*/*.h src/*/*.cpp $(DIR)/$(NAME).cpp -o build/$(NAME)
example:
	g++ -I. src/omm.h src/*/*.h src/*/*.cpp examples/$(NAME).cpp -o build/$(NAME)