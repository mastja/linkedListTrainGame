
output: main.o menu.o space.o captainQuarters.o engineersRoom.o mainCabin.o mainCabin_3.o caboose.o people.o man.o woman.o child.o doublyLinkedList.o simulation.o peopleCarry.o
	g++ main.o menu.o space.o captainQuarters.o engineersRoom.o mainCabin.o mainCabin_3.o caboose.o people.o man.o woman.o child.o doublyLinkedList.o simulation.o peopleCarry.o -o output

main.o: main.o
	g++ -c main.cpp

menu.o: menu.cpp Menu.hpp
	g++ -c menu.cpp

space.o: space.cpp Space.hpp
	g++ -c space.cpp

captainQuarters.o: captainQuarters.cpp CaptainQuarters.hpp
	g++ -c captainQuarters.cpp

engineersRoom.o: engineersRoom.cpp EngineersRoom.hpp
	g++ -c engineersRoom.cpp

mainCabin.o: mainCabin.cpp MainCabin.hpp
	g++ -c mainCabin.cpp

mainCabin_3.o: mainCabin_3.cpp MainCabin_3.hpp
	g++ -c mainCabin_3.cpp

caboose.o: caboose.cpp Caboose.hpp
	g++ -c caboose.cpp

people.o: people.cpp People.hpp
	g++ -c people.cpp

man.o: man.cpp Man.hpp
	g++ -c man.cpp

woman.o: woman.cpp Woman.hpp
	g++ -c woman.cpp

child.o: child.cpp Child.hpp
	g++ -c child.cpp

doublyLinkedList.o: doublyLinkedList.cpp DoublyLinkedList.hpp
	g++ -c doublyLinkedList.cpp

simulation.o: simulation.cpp Simulation.hpp
	g++ -c simulation.cpp

peopleCarry.o: peopleCarry.cpp PeopleCarry.hpp
	g++ -c peopleCarry.cpp

clean:
	rm *.o output